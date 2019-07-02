.PYTHON = all

all:
	@i386-elf-gcc -O2 -S code.c -m32 -fno-omit-frame-pointer
	@gcc -O2 -S code.c -o code64.s

clean:
	@rm -rf *.s