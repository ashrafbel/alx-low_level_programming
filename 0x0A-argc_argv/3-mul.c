#include <stdio.h>
#include <stdlib.h>

/**
 * main - the result of the multiplication
 * @argc: Argument count.
 * @argv: Arguments.
 * Return: 0 or 1 if error.
*/


int main(int argc, char **argv)
{
int f, g;

if (argc < 3)
{
printf("Error\n");
return (1);
}

f = atoi(argv[1]);
g = atoi(argv[2]);
printf("%d\n", f *g);
return (0);
}


