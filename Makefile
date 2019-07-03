.PYTHON = all

OBJS = code.s helloworld.s 

all: $(OBJS)

.c.s:
	@i386-elf-gcc -O2 -S -m32 -fno-omit-frame-pointer -o $@ $<
	@gcc -O2 -S -o $@_64.s $<

clean:
	@rm -rf *.s