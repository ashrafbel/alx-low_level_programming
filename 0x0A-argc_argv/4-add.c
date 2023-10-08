#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers.
 * @argc: Argument count.
 * @argv: Arguments.
 * Return: 0 or 1 if error.
 */


int main(int argc, char **argv)


{
int y, n, m = 0;
char *p;

if (argc < 2)
{
printf("0\n");
return (0);
}

for (y = 1; argv[y]; y++)
}
n = strtol(argv[y], &p, 10);
if (*p)
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

