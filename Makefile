# Build flags
CC              = g++
CF_ALL          = -std=c++11
LF_ALL          += $(shell pkg-config --libs protobuf libzmq)

# Build tools
COMP		= $(CC) $(CF_ALL) $(CF_TGT) -c -o $@ $<
LINK        = $(CC) $(LF_ALL) $(LF_TGT) -o $@ $(filter %.o,$^) $(LF_ALL)

include Rules.mk
