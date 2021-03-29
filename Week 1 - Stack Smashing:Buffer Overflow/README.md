Demo Instructions:

1) Compile with gcc -fno-stack-protector -no-pie -O3 buffer_overflow.c
2) Disassemble with objdump -D a.out
3) Generate bof file with python3 bytes.py > bof
4) Run in gdb with run < bof
