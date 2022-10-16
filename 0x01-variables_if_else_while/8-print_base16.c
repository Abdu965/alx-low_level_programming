#include <stdio.h>

/**
 * main - prints all the numbers of base 16 followed by newline
 * Return: 0
 */

int main(void)
{
	char i, j;

	for (i = 48; i < 58; i++)
		putchar(i);
	for (j = 'a'; j < 'g'; j++)
		putchar(j);
	putchar(10);
	return (0);
}
