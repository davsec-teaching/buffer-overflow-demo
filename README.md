### Demo for buffer overflow

1. Compile using `clang demo.c -o demo` or `gcc -fno-stack-protector demo.c -o demo`
2. Run `./demo`
3. The application expects a 8 character password. Enter longer password to cause a buffer overflow.
4. That is all :-)
