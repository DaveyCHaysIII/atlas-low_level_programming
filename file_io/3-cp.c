#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdlib.h>

/**
 * main()- copies a file
 * @argc: number of args
 * @argv: the args
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int fd_source, fd_dest, fd_read, fd_written;
	char buffer[1024];

	if (argc != 3)
	{
		dfprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	fd_source = open(argv[1], O_RDONLY);
	if (fd_source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	fd_dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644)
	if (fd_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_source);
		return (99);
	}
	fd_read = read(fd_source, buffer, 1024);
	if (fd_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_source);
		close(fd_dest);
		return (98);
	}
	fd_written = write(fd_dest, buffer, 1024);
	if (fd_written == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
		close(fd_source);
		close(fd_dest);
		return (99);
	}
	if (close(fd_source) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		return (100);
	}
	if (close(fd_dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		return (100);
	}
	return (0);
}
