#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: pointer to the string to be printed
 * Return: void
 */
void print_rev(char *s)
{
int length = 0;
while (s[length] != '\0')
length++;
for (int i = length - 1; i >= 0; i--)
printf("%c", s[i]);
printf("\n");
}
