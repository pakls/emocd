

ifneq ($(shell which arm-none-eabi-gcc),)
CROSS    = arm-none-eabi-
endif

ifneq ($(CROSS),)
CFLAGS  += -D__weak=
endif

CC=$(CROSS)gcc
AR=$(CROSS)ar

CFLAGS  += -Iinc/cmsis-core        \
           -Iinc/cmsis-dap         \
           -Iport/mt7687           \

SRCS    += src/cmsis-dap/JTAG_DP.c \
           src/cmsis-dap/SW_DP.c   \
           src/cmsis-dap/DAP.c     \

OBJS     = ${SRCS:.c=.o}

####################
# targets
####################

all: clean libemocd.a 

clean:
	rm -f $(OBJS) libemocd.a

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

libemocd.a: $(OBJS)
	$(AR) crv $@ $^

