#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: 0
 */

int main(void)
{
	int i, j;

	i = 48;
	while (i < 58)
	{
		j = (48 + (i - 48));
		while (j < 58)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
				putchar(44);
				putchar(32);
			}
			j++;
		}
		i++;
	}
	putchar(10);
	return (0);
}