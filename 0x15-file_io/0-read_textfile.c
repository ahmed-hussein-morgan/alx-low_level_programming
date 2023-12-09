#include "main.h"



ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, w, r;
	char buffer[1024];

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDWR);
	if (!fd)
	{
		return (0);
	}
	r = read(fd, buffer, letters);
	if (!r)
	{
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, r);
	if (!w)
	{
		return (0);
	}
	close(fd);
	return (w);
}
