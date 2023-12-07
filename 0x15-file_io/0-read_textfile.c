#include "main.h"



ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	#define BUFFER 1024

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDWR);
	if (!fd)
	{
		return (0);
	}
	r = read(fd, BUFFER, letters);
	if (!r)
	{
		return (0);
	}
}
