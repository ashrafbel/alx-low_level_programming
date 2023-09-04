#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Creates a file and writes text content to it.
 * 
 * @filename: Name of the file to create.
 * 
 *
 * @text_content: Text content to write to the file (can be NULL).
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)

{
	int fd, t, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	t = write(fd, text_content, l);

	if (fd == -1 || t == -1)
		return (-1);

	close(fd);

	return (1);
}

