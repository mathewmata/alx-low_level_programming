#include "main.h"

/**
 * is_prime_number - function that returns 1 if input integer is a prime number
 * @n: character to input
 *
 * Return: 1 if prime number and 0 if not
 */

int is_prime_number(int n)
{
	int is_prime_number = 0;

	if (n < 2)
		is_prime_number = 0;
	else if (n == 2)
		is_prime_number = 1;
	else if (n % 2 == 1)
		is_prime_number = 1;

	return (is_prime_number);
}
