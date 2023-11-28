#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: text to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fdtr;
int WR;

if (filename == NULL)
return (-1);


fdtr = open(filename, O_WRONLY | O_APPEND);

if (fdtr == -1)
return (-1);

if (text_content != NULL)
{
WR = write(fdtr, text_content, strlen(text_content));

if (WR == -1)
{
close(fdtr);
return (-1);
}
}
close(fdtr);
return (1);
}

