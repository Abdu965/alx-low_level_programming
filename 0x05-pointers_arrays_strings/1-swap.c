#include "main.h"
/**
 * swap_int - don't swap horses when crossing a stream
 * @a: pointer to integer to swap
 * @b: pointer to integer to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

