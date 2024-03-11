#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile()- reads a text file
 * @filename: name of file to read
 * @letters: literal number of letters to print out
 *
 * Return: number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return (0);
	}

	int fd;
	char buffer[letters];
	ssize_t bytes_read, bytes_written;

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
	return (bytes_written);
}
