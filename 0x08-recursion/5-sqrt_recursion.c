#include "main.h"



int sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - Computes the square root of a number
 * @n: Input number
 *
 * Return: Square root of n.
 */


int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_recursion(n, 0));
}
/**
 * sqrt_recursion - Recursively calculates square root of a number.
 * @n: Input number
 * @i: Iterator
 *
 * Return: Square root of n.
 */
int sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_recursion(n, i + 1));
}


