#include <unistd.h>

/**
 *_putchar - writes the character c to stdout
 *@z: The character to print
 *
 *Return: on success 1.
 *on errror, -1 is returned, and errno is set approprietly.
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
