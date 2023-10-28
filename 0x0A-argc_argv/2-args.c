#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 * @argc: Argument count.
 * @argv: Array of arguments.
 * Return: 0.
 */
int main(int argc, char **argv)
{
int k;
for (k = 0; k < argc; k++)
{
printf("%s\n", argv[k]);
}
	return (0);
}

