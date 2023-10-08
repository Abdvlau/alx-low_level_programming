0x09. C - Static Libraries

This project explores the concept of static libraries in the C programming language. It involves creating a static library named libmy.a containing various functions, each defined in its corresponding .c file. Additionally, a script create_static_lib.sh is provided to automate the creation of a static library from .c files.

Files
1. libmy.a
This is a static library containing the following functions:

_putchar
_islower
_isalpha
_abs
_isupper
_isdigit
_strlen
_puts
_strcpy
_atoi
_strcat
_strncat
_strncpy
_strcmp
_memset
_memcpy
_strchr
_strspn
_strpbrk
_strstr
2. main.h
This header file contains the function prototypes for the functions present in libmy.a.

3. main.c
This file includes main.h and demonstrates the use of the _puts function.

4. create_static_lib.sh
A shell script to create a static library liball.a from all .c files in the current directory.




