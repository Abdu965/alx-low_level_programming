#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0, i, temp;

	while (s[len + 1] != 0)
		len++;
	for (i = 0; i <= len / 2; i++)
	{
		temp = s[i], s[i] = s[len - i];
		s[len - i] = temp;
	}
}
