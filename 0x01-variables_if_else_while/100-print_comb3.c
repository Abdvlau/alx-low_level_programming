#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all unique combinations of two-digit numbers
 * separated by a comma and space, excluding repetitions.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            putchar(i + '0'); 
            putchar(j + '0');

            if (!(i == 8 && j == 9)) 
            {
                putchar(','); 
                putchar(' '); 
            }
        }
    }

    putchar('\n'); 
    return (0);
}
