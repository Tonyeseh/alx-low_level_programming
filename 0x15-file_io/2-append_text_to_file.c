#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 *
 * Description: if text_content is NULL do not add anything to the file
 * return 1 if the file exists and -1 if the file does not of if you don't
 * have the required permissions to write the file.
 * does not create the file if it does not exist
 *
 * Return: 1 on success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_RDWR | O_APPEND);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		w = write(o, text_content, len);
	}
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
