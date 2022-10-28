#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n number of indexes of an array
 * @a: input array
 * @n: input num of indexes to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d%s", a[i], i < n - 1 ? ", " : "");
	printf("\n");
}
