#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the lowercase and uppercase alphabets
 * separated by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char c = 'a';

    while (c <= 'z')
    {
        putchar(c);
        c++;
    }

    c = 'A';

    while (c <= 'Z')
    {
        putchar(c);
        c++;
    }

    putchar('\n');
    return (0);
}
