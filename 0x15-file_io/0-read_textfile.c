#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @letters: number of letters would be print and read
 * @filename: name of file to be open
 *
 * Return: 0 if filename is NULL or file caanot be read or opened or
 * the actual number of letters it could print and read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int o;
	ssize_t w, r;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || r != w)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	return (w);
}
