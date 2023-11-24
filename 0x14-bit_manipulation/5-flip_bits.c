#include <stdio.h>
/**
 * flip_bits - returns the number of bits to flip
 * to get from one number to another
 * @n: The first number
 * @m: The second number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xo_r = n ^ m;
unsigned int c = 0;

while (xo_r > 0)
{
c += xo_r & 1;
xo_r >>= 1;
}
return (c);
}

