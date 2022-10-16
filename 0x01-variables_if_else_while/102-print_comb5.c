#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: 0
 */

int main(void)
{
	int i, j, k, l;

	i = 48;
	while (i < 58)
	{
		j = (48 + (i - 48));
		while (j < 58)
		{
			k =( 48 + (j - 48));
			while (k < 58)
			{
				l = (49 + (k - 48));
				while (l < 58)
				{
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(l);
					putchar(44);
					putchar(32);
					l++;
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
