#include "main.h"

/**
 * _strpbrk - locatess the first occurance in the string
 * @s: character to input
 * @accept: character to input
 *
 * Return: always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return ('\0');
}

