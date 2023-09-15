#include "main.h"
/**
 * positive_or_negative - Determines whether a number is '+', '-', or 0.
 * @i: The integer to be checked.
 * Description: The function checks if the given integer @i is '+', '-' , or 0.
 * Return: void (no return value)
 */
void positive_or_negetive(int i)
{
if (i > 0)
	printf("%d is positive\n", i);
else if (i < 0)
	printf("%d is negative\n", i);
else
	printf("%d is zero\n", i);
}
