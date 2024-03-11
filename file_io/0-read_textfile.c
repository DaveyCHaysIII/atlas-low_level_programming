#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * read_textfile()- reads a text file
 * @filename: name of file to read
 * @letters: literal number of letters to print out
 *
 * Return: number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(letters);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		close(fd);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, letters);
	if (bytes_written == -1)
	{
		close(fd);
		return (0);
	}
	close(fd);
	free(buffer);
	return (bytes_written);
}
