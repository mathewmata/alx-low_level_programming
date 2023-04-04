#include "main.h"

/**
 * memcpy - copies bytes from memory area to memory area
 * @n: number of bytes to be copied
 * @src: memory copied
 * @dest: memory stored
 *
 * Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int k = n;

	for (; j > k; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
