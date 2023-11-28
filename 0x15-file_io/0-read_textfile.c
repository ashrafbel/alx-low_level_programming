#include "main.h"
/**
 * read_textfile - reads a text file and print it
 * @filename: filename to read.
 * @letters: numbers of letters printed
 *
 * Return: numbers of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fdtr;
ssize_t by;
char *buf_eer;

if (!filename)
return (0);

fdtr = open(filename, O_RDONLY);

if (fdtr == -1)
return (0);
if (!buf_eer)
return (0);

by = read(fdtr, buf_eer, letters);
by = write(STDOUT_FILENO, buf_eer, by);
close(fdtr);
return (by);
}
