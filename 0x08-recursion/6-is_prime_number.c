#include "main.h"

int actual_prime(int n, int j);

/**
 * is_prime_number - function that returns 1 if input integer is a prime number
 * @n: character to input
 *
 * Return: 1 if prime number and 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - calculates for prime number
 * @n: number to evaluate
 * @j: iterator
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int actual_prime(int n, int j)
{
	if (j == 1)
		return (1);
	if (n % j == 0 && j > 0)
		return (0);
	return (actual_prime(n, j - 1));
}
