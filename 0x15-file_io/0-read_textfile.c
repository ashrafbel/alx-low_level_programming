#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - Read text file and print to STDOUT.
 * @filename: Name of the text file to read.
 * @letters: Number of letters to read.
 * Return: The actual number of bytes read and printed, or -1 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    ssize_t w, t;
    char *buf;

    if (filename == NULL)
        return (0);

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    buf = malloc(letters);
    if (buf == NULL)
    {
        close(fd);
        return (-1);
    }

    t = read(fd, buf, letters);
    if (t == -1)
    {
        free(buf);
        close(fd);
        return (-1);
    }

    w = write(STDOUT_FILENO, buf, t);
    if (w == -1 || w != t)
    {
        free(buf);
        close(fd);
        return (-1);
    }

    free(buf);
    close(fd);
    return (w);
}

