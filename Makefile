all:
	make -C bof
	make -C shellcode
	make -C rop
	make -C ret2plt