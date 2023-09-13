#include "main.h"
/**
 * int _isalpha - checks for alphabetical character
 * @c: the character to be checked
 * Return: 1 if c is a character 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
}

