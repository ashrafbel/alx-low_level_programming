#include "main.h"
/**
 * _pow_recursion - Computes x raised to the power of y using recursion.
 * @x: Base value
 * @y: Exponent
 *
 * Return: Result of x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

