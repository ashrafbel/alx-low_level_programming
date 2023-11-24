#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
int t = sizeof(unsigned long int) * 8 - 1, fg = 0;

while (t >= 0)
{
if ((n >> t--) & 1)
{
putchar('1');
fg = 1;
}
else if (fg)
{
putchar('0');
}
}
if (!fg)
putchar('0');
}

