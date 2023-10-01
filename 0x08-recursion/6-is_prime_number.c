#include "main.h"

int actual_prime(int n, int y);

/**
 * is_prime_number - Checks if a number is prime.
 * @n: Input number
 *
 * Return: 1 if n is prime, 0 otherwise.
 */


int is_prime_number(int n)

{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - Recursively checks if a number is prime.
 * @n: Input number
 * @y: Iterator
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int actual_prime(int n, int y)
{
	if (y == 1)
		return (1);
	if (n % y == 0 && y > 0)
		return (0);
	return (actual_prime(n, y - 1));
}


