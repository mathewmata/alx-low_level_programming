#include "main.h"

/**
 * _strstr - find the first occurence of the substring in the string
 * @needle: character to input
 * @haystack: character to input
 *
 * Return: always 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *d = needle;
		char *y = haystack;

		while (*y == *d && *d != '\0')
		{
			y++;
			d++;
		}
		if (*d == '\0')
			return (haystack);
	}
	return (0);
}
