#include "main.h"

/**
 * create_file - creates a file
 *
 * Description: truncate if file already exists
 * the file is given the pemissions rw- - - - - - -
 *
 * @filename: name of file to create
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: -1 if filename is NULL  and on failure or 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	int o, len;
	ssize_t w;

	if (filename == NULL || text_content == NULL)
		return (-1);

	len = 0;
	while (text_content[len] != '\0')
	{
		len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	return (1);
}
