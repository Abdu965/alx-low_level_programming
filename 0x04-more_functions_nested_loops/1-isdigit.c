#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9)
 *
 *@c: represent a digit
 *Return: 1 if the digit is 0 through 9, otherwise 0.
 */

int _isdigit(int c);
{
	if (c > 'A' && c < 'Z')
		return (1);
	else
		return (0);
}
