#include "main.h"

/**
 * _strchr - returns a pointer to the first occurence of character in a string or NULL
 * @c: character to input
 * @s: character to input
 *
 * Return: always 0
 */

char *_strchr(char *s, char c)
{
	int j = 0;

	for (; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}
