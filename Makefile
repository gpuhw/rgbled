#CROSS_COMPILE=/usr/local/bin/avr-
CROSS_COMPILE=avr-

CC=$(CROSS_COMPILE)gcc
STRIP=$(CROSS_COMPILE)strip
OBJCOPY=$(CROSS_COMPILE)objcopy
OBJDUMP=$(CROSS_COMPILE)objdump
SIZE=$(CROSS_COMPILE)size
HEXDUMP=hexdump

AVRDUDE ?= avrdude
AVRDUDE_FLAGS = -c jtagkey -pt85 -u -F -qq
AVRDUDE_CLOCK = -B 10kHz
DWDEBUG ?= ~/proj/git_pure/dwire-debug/dwdebug

LDFLAGS = -Wl,--gc-sections
LDLIBS = 
CFLAGS = -std=gnu11 -Wall -pedantic -fno-diagnostics-show-caret
CFLAGS += -O3 -mmcu=attiny85
CFLAGS += -ffunction-sections -fdata-sections -fwhole-program -flto
CFLAGS += -MD -MP

OBJS = main.o

DEPS = $(OBJS:.o=.d)

all: flash.o

.SUFFIXES: .s .bin .out .hex .srec

%.inc: %.bin
	wc -c <$< | (xargs printf "0x%08x, // length in bytes\n") >$@
	$(HEXDUMP) -ve '/4 "0x%08x,\n"' $< >>$@
%.bin : %.o
	$(OBJCOPY) -O binary $< $@
%.o : %.c
	$(CC) $(CFLAGS) $(INCLUDES) $(DEFINES) -c -o $@ $<

flash.o: $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) -o $@ $+

.PHONY: clean
clean:
	rm -f *.o *.d

.PHONY: flash_fuses_dw
flash_fuses_dw:
	$(AVRDUDE) $(AVRDUDE_FLAGS) -B 1kHz -U lfuse:w:0xe1:m -U hfuse:w:0x9f:m

.PHONY: run_dw
run_dw: flash.o
	$(DWDEBUG) verbose,device 0 125000,reset,l $+,q

$(OBJS): Makefile

-include $(DEPS)
