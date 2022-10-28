#include "main.h"
#include <stdio.h>
/**
 * _atoi - returns integer values from string
 * @s: input string
 *
 * Return: will return integer
 */
int _atoi(char *s)
{
	int result = 0, sign = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign++;
		if (s[c] > 47 && s[c] < 58)
		{
			while (s[c] > 47 && s[c] < 58)
				result = result * 10 - (s[c++] - 48);
				break;
		}
	}
	return (result *= sign % 2 == 0 ? -1 : 1);
}
