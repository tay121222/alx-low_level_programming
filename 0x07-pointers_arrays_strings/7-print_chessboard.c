#include "main.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a: defines the size of the chessboard
 */
void print_chessboard(char (*a)[8])
{
	int r = 0;
	int c = 0;

	while (r < 8)
	{
		while (c < 8)
		{
			_putchar(a[r][c]);
			c++;
		}
		_putchar('\n');
		c = 0;
		r++;
	}
}
