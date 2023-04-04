#include "main.h"

/**
 * _memset - fills memory area pointed to with constant b
 * @n: number of bytes to be filled
 * @s: starting address
 * @b: desired value
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (;n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
