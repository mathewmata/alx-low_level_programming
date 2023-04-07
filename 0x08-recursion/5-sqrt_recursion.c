#include "main.h"

int actual_sqrt_recursion(int n, int j);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number of square root
 *
 * Return: square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - find the natural square root of a number
 * @n: number to calculate the square root of a number
 * @j: iterator
 *
 * Return: the resulting square root
 */

int actual_sqrt_recursion(int n, int j)
{
	if (j * j > n)
		return (-1);
	if (j * j == n)
		return (j);
	return (actual_sqrt_recursion(n, j + 1));
}
