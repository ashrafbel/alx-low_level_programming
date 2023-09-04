#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - Read text file and print to STDOUT.
 * @filename: Name of the text file to read.
 * @letters: Number of letters to read.
 * Return: The actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    if (filename == NULL)
        return (0);

    int fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    char *buf = malloc(letters);
    if (buf == NULL)
    {
        close(fd);
        return (0);
    }

    ssize_t t = read(fd, buf, letters);
    if (t == -1)
    {
        free(buf);
        close(fd);
        return (0);
    }

    ssize_t w = write(STDOUT_FILENO, buf, t);
    if (w == -1 || w != t)
    {
        free(buf);
        close(fd);
        return (0);
    }

    free(buf);
    close(fd);
    return (w);
}

