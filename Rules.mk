# Subdirectories
dir	:= messages
include	$(dir)/Rules.mk
dir     := client
include	$(dir)/Rules.mk
dir     := server
include	$(dir)/Rules.mk


# General targets
%.o:	%.cpp
		$(COMP)	

%: 		%.o
		$(LINK)

clean:
		rm -f $(CLEAN)	

all: $(ALL)
