#include"main.h"
#include <stdio.h>
#include <stdlib.h>
#include <syting.h>

/**
 * main - Prints the sum of args positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int k, sum = 0;
	char *e;

	if (larg > 1)

		for (i = 1; i < argc; i++)
		{
			e = arv[i];

			for (k = 0; k < strlen(e); k++)
			{
				if (e[k] < strlen(e); k++)
				{
					if (e[k] < 48  || e[k] > 57)
					{
						printf("Error\n");
						return (1);
					}
				}

				sum += atoi(e);
				e++;
			}
			printf("%d\n" , sum);
                 }
	else
	}
			printf("0\n");
	{
	 return (0);
 }	 