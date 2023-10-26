#include "main.h"

int kira(int n, int k);

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
	return (kira(n, n - 1));
}
/**
 * kira - checks if a number is prime.
 * @n: Input number
 * @k: Iterator
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int kira(int n, int k)
{
	if (k == 1)
		return (1);
	if (n % k == 0 && k > 0)
		return (0);
	return (kira(n, k - 1));
}


