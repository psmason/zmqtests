# Stack push
sp 		:= $(sp).x
dirstack_$(sp)	:= $(d)
d		:= $(dir)

# Local variables
OBJS_$(d)	:= $(d)/main.m.o 

CLEAN 	        := $(CLEAN) $(OBJS_$(d)) $(d)/server.tsk

ALL             := $(ALL) server

server : $(d)/server.tsk

%server.tsk : $(OBJS_$(d))
	@echo building for $(OBJS_$(d))
	$(LINK)	

# Stack pop
-include	$(DEPS_$(d))
d		:= $(dirstack_$(sp))
sp		:= $(basename $(sp))
