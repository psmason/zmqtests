# Stack push
sp				:= $(sp).x
dirstack_$(sp)	:= $(d)
d				:= $(dir)

# Local variables
PB_DIR    := $(d)
GEN_FILES := $(PB_DIR)/mysvcmessages.pb.cc \
	     $(PB_DIR)/mysvcmessages.pb.h

# Local rules
messages : ./messages/mysvcmessages.pb.o

./messages/mysvcmessages.pb.o : ./messages/mysvcmessages.pb.cc
	$(info "protobuf comp args" $@ $^)
	$(COMP)	

./messages/mysvcmessages.pb.% : 
	protoc --proto_path=$(PB_DIR) --cpp_out=$(PB_DIR) $(PB_DIR)/mysvcmessages.proto	

CLEAN := $(CLEAN) $(d)/mysvcmessages.pb.cc $(d)/mysvcmessages.pb.h 

# Stack pop
-include	$(DEPS_$(d))
d		:= $(dirstack_$(sp))
sp		:= $(basename $(sp))
