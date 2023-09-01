#include "main.h"

/**
 * set_bit - sets a specific bit at a given position to 1 within a number.
 * @n: A pointer to the number whose bit needs to be changed.
 * @index: The index of the bit to be set to 1.
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

