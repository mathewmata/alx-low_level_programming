#include "main.h"

/**
 * _strlen_recursion - function that prints length of a string
 * @s: string to be measured
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
