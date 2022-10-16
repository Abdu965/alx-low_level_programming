#include <stdio.h>

/**
 * main - prints the alphabet in lowercase followed by newline
 * Return: 0
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
