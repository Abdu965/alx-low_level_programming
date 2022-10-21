#include "main.h"

/**
 * print_diagonal - prints diagonal line in the terminal
 *
 * @n: represent arguments
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (n > 0 && j < i)
				_putchar(' ');
			else
				_putchar('\\');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
