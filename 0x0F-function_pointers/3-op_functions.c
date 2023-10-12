#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - Computes the sum of two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: The result of a + b.
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Computes the difference of two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: The result of a - b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Computes the product of two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: The result of a multiplied by b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Computes the division of two numbers.
 * @a: First number (numerator).
 * @b: Second number (denominator).
 *
 * Return: The quotient of a divided by b.
 */

int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}

