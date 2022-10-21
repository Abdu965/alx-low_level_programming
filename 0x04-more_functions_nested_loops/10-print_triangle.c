#include "main.h"

/**
 * print_triangle - prints triangle followed by new line
 *
 * @size: a parameter to accept values
 */

void print_triangle(int size)
{
	int i, j;

	for (i = (size - 1); i >= 0; i--)
	{
		if (size > 0)
		{
			for (j = 0; j < size; j++)
			{
				if (j < i)
					putchar(' ');
				else
					putchar('#');
			}
		}
		putchar('\n');
	}
}
