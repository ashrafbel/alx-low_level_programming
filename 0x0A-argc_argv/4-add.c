#include <stdio.h>
#include <stdlib.h>
/**
 * main - add positive numbers
 * @argc: the numbers of argeument
 * @argv: array of argument
 * Return: 1 if error or 0
 */

int main(int argc, char *argv[])
{
int x, n, m = 0;
char *k;
if (argc < 2)
{
printf("0\n");
return (0);
}
for (x = 1; x < argc; x++)
{
n = strtol(argv[x], &k, 10);
if (*k)
{
printf("Error\n");
return (1);
}
else
{
m += n;
}
}
printf("%d\n", m);
return (0);
}

