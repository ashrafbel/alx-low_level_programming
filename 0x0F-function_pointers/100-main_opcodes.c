#include <stdio.h>
#include <stdlib.h>


/**
 * main - Prints its own opcodes.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	int O, k;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
O = atoi(argv[1]);

	if (O < 0)
	{
		printf("Error\n");
		exit(2);
	}
arr = (char *)main;
	k = 0;

	while (k < O)
	{
		if (k == O - 1)
		{
			printf("%02hhx\n", arr[k]);
		}
		else
		{
			printf("%02hhx ", arr[k]);
		}
		k++;
	}
	printf("%02hhx ", arr[i]);
	}
	return (0);
}

