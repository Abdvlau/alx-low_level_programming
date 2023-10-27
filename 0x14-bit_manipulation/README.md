0x14. C - Bit manipulation

Header File main.h: Contains prototypes for all the functions written in the project. Here are the function prototypes:

0-binary_to_uint.c - unsigned int binary_to_uint(const char *b);
1-print_binary.c - void print_binary(unsigned long int n);
2-get_bit.c - int get_bit(unsigned long int n, unsigned int index);
3-set_bit.c - int set_bit(unsigned long int *n, unsigned int index);
4-clear_bit.c - int clear_bit(unsigned long int *n, unsigned int index);
5-flip_bits.c - unsigned int flip_bits(unsigned long int n, unsigned long int m);
100-get_endianness.c - int get_endianness(void);
These prototypes define the functions and their parameters used in the project.


In this project, I learned how to work with bitwise operators in C, such as >>, <<, &, |, and ^. The project consists of several tasks, each implemented as a separate C file:

0-binary_to_uint.c: This function converts a binary number represented as a string of 0s and 1s to an unsigned integer. If the input string is invalid (e.g., contains characters other than 0 and 1), it returns 0.

1-print_binary.c: This function prints the binary representation of a given number.

2-get_bit.c: It returns the value of a bit at a specified index (0-based). If an error occurs, it returns -1.

3-set_bit.c: This function sets the value of a bit at a given index to 1. If there's an error, it returns -1; otherwise, it returns 1.

4-clear_bit.c: This function sets the value of a bit at a given index to 0. If there's an error, it returns -1; otherwise, it returns 1.

5-flip_bits.c: This function calculates the number of bits that need to be flipped in one number to transform it into another.

100-get_endianness.c: It's a function that checks the endianness of the system. If the system is big-endian, it returns 0; if it's little-endian, it returns 1.

101-password: This file contains the password for a crackme3 executable.

These tasks help you practice bit manipulation and bitwise operations in C.

