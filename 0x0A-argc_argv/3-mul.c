#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers.
 * @argc: Argument count.
 * @argv: Arguments.
 * Return: 0 or 1 if error.
*/


int main(int argc, char **argv)
{
int a, b;

if (argc < 3)
{
printf("Error\n");
return (1);
}

a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", a *b);
return (0);
}

