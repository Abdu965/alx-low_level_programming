#include "main.h"
/**
 * _isupper - checks a character if it's uppercase or not
 *
 * @c: represent character
 * Return: 1 if it's uppercase letter
 *         0 if it's not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
