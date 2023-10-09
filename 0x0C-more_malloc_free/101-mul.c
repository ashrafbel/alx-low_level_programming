#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Check if a string consists of digits.
 * @str: String to check.
 * Return: 1 if all characters are digits, 0 otherwise.
 */
int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - Multiply two positive numbers provided as arguments.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 on success 98 on incorrect number of arguments or non-digit input
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);

