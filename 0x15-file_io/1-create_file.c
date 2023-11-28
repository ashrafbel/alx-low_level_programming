#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: write to the file in text
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fdtr, r;
size_t by = S_IRUSR | S_IWUSR;

if (filename == NULL)
return (-1);

fdtr = open(filename, O_CREAT | O_WRONLY | O_TRUNC, by);

if (fdtr == -1)
return (-1);

if (text_content != NULL)
{
r = write(fdtr, text_content, strlen(text_content));

if (r == -1)
{
close(fdtr);
return (-1);
}
}

close(fdtr);
return (1);
}

