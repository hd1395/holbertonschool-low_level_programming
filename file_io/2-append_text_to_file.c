#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: pointer to the name of the file.
 * @text_content: string to append to the end of the file.
 *
 * Return: -1 if on failure or filename is NULL,
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int o, w, len = 0;

if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
o = open(filename, O_WRONLY | O_APPEND);
w = write(o, text_content, len);
if (o == -1 || w == -1)
return (-1);
close(o);
return (1);
}
