#include "main.h"

int _strlen_recursion(char *s);
int check_pal(char *s, int j, int len);

/**
 * is_palindrome - function that returns 1 if string is palindrome and 0 if not
 * @s: string
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the lenght of string
 * @s: string
 *
 * Return: lenght of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks character for palindrome
 * @s: string
 * @j: iterator
 * @len: lenght of string
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */

int check_pal(char *s, int j, int len)
{
	if (*(s + j) != *(s + len - 1))
		return (0);
	if (j >= len)
		return (1);
	return (check_pal(s, j + 1, len - 1));
}


