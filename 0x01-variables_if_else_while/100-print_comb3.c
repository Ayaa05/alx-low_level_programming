#include <stdio.h>
/**
 * main - Entry point
 *
 *
 * Return: ALways 0 (Success)
*/

int main(void)
{
	int a = '0';
	int b = '1';

	while (a <= '8')
	{
		b = a + 1;
		while (b <= '9')
		{
			putchar(a);
			putchar(b);
			if (a != '8')
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
