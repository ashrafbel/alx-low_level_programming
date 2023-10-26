#include "main.h"

int sqrt(int n, int i);

/**
 * _sqrt_recursion - Computes the square root of a number
 * @n: Input number
 * Return: Square root of n.
 */


int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (sqrt(n, 0));
}
/**
 * sqrt - Recursively calculates square root of a number
 * @n: Input number
 * @i: Iterator
 *
 * Return: Square root of n.
 */
int sqrt(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (actual_sqrt_recursion(n, i + 1));
}


