#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all single digit numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int c = 48;

	while (c <= 57)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
