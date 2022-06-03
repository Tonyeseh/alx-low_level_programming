# This contains inforamtion for specific files in this directory.

0-preprocessor: runs a C file through the preprocessor and save the result into another file. th c file name is saved in a variable $CFILE and output is said in file c.

1-compiler: compiles a C file but does not link. Note: The C file name will be saved in the variable $CFILE and The output file is named the same as the C file, but with the extension .o instead of .c

2-assembler: generates the assembly code of a C code and save it in an output file. Note: The C file name will be saved in the variable $CFILE and The output file is named the same as the C file, but with the extension .s instead of .c

3-name: compiles a C file and creates an executable named cisfun. Note: The C file name will be saved in the variable $CFILE

4-puts.c: prints exactly "Programming is like building a multilingual puzzle, followed by a new line. Note: Using the function puts and returns 0.

5-printf.c: prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line. using the function printf and returns 0.

6-size.c: prints the size of various types on the computer it is compiled and run on. You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option. program return 0.

100-intel: generates the assembly code (Intel syntax) of a C code and save it in an output file. Note: The C file name will be saved in the variable $CFILE.The output file will be named the same as the C file, but with the extension .s instead of .c.

101-quote.c: prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error. returns 1.
