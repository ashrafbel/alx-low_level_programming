#include <stdio>
/**
 * main - prints the number of arguments passed
 * @argc: comand line argument numbers
 * @argv: argument
 * Return: 0.
 */
int main(int argc, char **argv)
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
