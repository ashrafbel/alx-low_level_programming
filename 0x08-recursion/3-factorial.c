#include "main.h"


/**
 * factorial - Computes the factorial of a number using recursion.
 * @n: Input number
 *
 * Return: factorial n
 */



int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

