 #include "main.h"

/**
 * print_square - prints a square, followed by an new line.
 *
 * @size: determines the size of square
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
