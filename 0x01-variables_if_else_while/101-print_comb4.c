#include <stdio.h>

/**
 * main - prints all possible different combinations of three digit
 * Return: 0
 */

int main(void)
{
	int i, j, k;

	i = 48;
	while (i < 58)
	{
		j = (49 + (i - 48));
		while (j < 58)
		{
			k = (50 + (j - 49));
			while (k < 58)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (k != 57)
				{
					putchar(44);
					putchar(32);
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar(10);
	return (0);
}
