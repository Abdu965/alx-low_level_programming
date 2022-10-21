#include <stdio.h>

/**
 * main - finds and prints the largestprime factor of the number 612852475143,
 * followed by new line
 * Return: Always 0(success).
 */

int main(void)
{
	unsigned long n, i, k;

	n = 612852475143;
	k = 0;

	for (i = 2; n != 1; i++)
	{
		while (n % i ==  0)
		{
			if (i > k)
				k = i;
			n = n / i;
		}
	}
	printf("\n%ld", k);
	printf("\n");
	return (0);
}
