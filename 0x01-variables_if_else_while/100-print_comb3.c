#include <stdio.h>
/**
 * main - Entry point
 *
 *
 * Return: ALways 0 (Success)
*/

int main(void)
{
	int n= '0';
	int m= '1';
	
	while (n <= '8)
	{
                m = n + 1;
		while (m <= '9')
		{
			putchar(n);
			putchar(m);
			if (a != '8')
			{
				putchar(',');
				putchar(' ');
			}
                        m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
