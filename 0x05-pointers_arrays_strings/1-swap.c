#include <stdio.h>

/**
 * swap_int - swaps the values of two integers.
 * @a: The first integer to be swaped.
 * @b: The second integer to be swapped.
 *
 * Return: Nothing
*/

void swap_int(int *a, int *b)
/* the function that swaps the values of two integers. */
{
	int m;
	m = *a;
	*a = *b;
	*b = m;
}
