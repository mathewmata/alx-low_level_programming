#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: the character to print
 *
 * Return: 1(sucess)
 * on error, -1, and errno is set approximately
 */

int _putchar(char)
{
	return (write (1, &c, 1));
}
