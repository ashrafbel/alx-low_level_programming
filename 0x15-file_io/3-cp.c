#include "main.h"

/**
 * main - program
 * @argc: number of commandline arguments
 * @argv: array of commandline arguments
 *
 * Return: 0 on success, appropriate exit code on failure
 */
int main(int argc, char *argv[])
{
int FileFrom, FileTo, RD, W;
char bufferoo[BUFFERSIZE];

if (argc != 3)
{
print_d(97, "Usage: cp file_from file_to");
}
FileFrom = open(argv[1], O_RDONLY);
if (FileFrom == -1)
{
print_d(98, "Error: Can't read from file");
}
FileTo = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664 );
if (FileTo == -1)
{
print_d(99, "Error: Can't write to file");
}

while ((RD = read(FileFrom, bufferoo, BUFFERSIZE)) > 0)
{
W = write(FileTo, bufferoo, RD);
if (W == -1)
{
print_d(99, "Error: Can't write to file");
}
}
if (RD == -1)
{
print_d(98, "Error: Can't read from file");
}
if (close(FileFrom) == -1)
{
print_d(100, "Error: Can't close fd");
}

if (close(FileTo) == -1)
{
print_d(100, "Error: Can't close fd");
}
return (0);
}
/**
 * print_d - prints an error message
 * @code: exit code
 * @message: error message
 */
void print_d(int code, const char *message)
{
dprintf(2, "%s\n", message);
exit(code);
}
