# Stack push
sp				:= $(sp).x
dirstack_$(sp)	:= $(d)
d				:= $(dir)

# Local variables
OBJS_$(d)	:= $(d)/main.m.o 

CLEAN 	    := $(CLEAN) $(OBJS_$(d)) $(d)/client.tsk

ALL         := $(ALL) client

# Local rules
client : $(d)/client.tsk

%client.tsk : messages $(OBJS_$(d))
	$(LINK)	

$(OBJS_$(d)):  CF_TGT := -Imessages

# Stack pop
-include	$(DEPS_$(d))
d		:= $(dirstack_$(sp))
sp		:= $(basename $(sp))
