#include "main.h"

/**
 * _pow_recursion - function that returns the value of x raise to the power y
 * @x: value to raise
 * @y: poweeer value
 *
 * Return: x to the powerr of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
