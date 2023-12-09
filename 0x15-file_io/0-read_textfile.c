#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to standard output.
 * @filename: the source file to read.
 * @letters: number of letters to read.
 * Return: the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, w, r;
	char buffer[2048];

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY | O_WRONLY);
	if (!fd)
	{
		return (0);
	}
	r = read(fd, buffer, letters);
	if (r == -1)
	{
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1)
	{
		return (0);
	}
	close(fd);
	return (w);
}
