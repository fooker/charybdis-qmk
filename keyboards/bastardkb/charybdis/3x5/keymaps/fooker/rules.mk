ifeq ($(COLOR),W)
	OPT_DEFS += -DFOOKER_COLOR_W
else
ifeq ($(COLOR),B)
	OPT_DEFS += -DFOOKER_COLOR_B
else
	$(error COLOR must be defined W or B)
endif
endif

