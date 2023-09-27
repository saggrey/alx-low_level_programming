#include "main.h"

/**
 * print_chessboard - prints chessboard.
 * @a: matrix
 */

void print_chessboard(char (*a)[8])
{
	int i, k;

	for (i = 0; i < 8; i++)
	{
		for (k = 0; k < 8; k++)
		{
			_putchar(*(*(i + a) + k));
		}
		_putchar('\n');
	}
}
