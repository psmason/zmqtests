# Stack push
sp              := $(sp).x
dirstack_$(sp)	:= $(d)
d		:= $(dir)

# Local variables
OBJS_$(d)	:= $(d)/main.m.o \
		   messages/mysvcmessages.pb.o \

CLEAN 		:= $(CLEAN) $(OBJS_$(d)) $(d)/server.tsk

ALL         	:= $(ALL) server

#Local rules
server : $(d)/server.tsk

%server.tsk : messages $(OBJS_$(d))
	@echo building for $(OBJS_$(d))
	$(LINK)	

$(OBJS_$(d)):  CF_TGT := -Imessages

# Stack pop
-include	$(DEPS_$(d))
d		:= $(dirstack_$(sp))
sp		:= $(basename $(sp))
