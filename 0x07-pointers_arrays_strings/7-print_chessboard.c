#include "main.h"

/**
 * print_chessboard - prints chessboard.
 *
 * @a: rows.
 * Return: nothing.
 */
void print_chessboard(char (*a)[8])
{
	int itr, jrt;

	for (itr = 0; itr < 8; itr++)
	{
		for (jrt = 0; jrt < 8; jrt++)
		{
			_putchar(a[itr][jrt]);
		}
		_putchar('\n');
	}
}
