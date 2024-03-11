#include "main.h"
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stddef.h>
#include <errno.h>

/**
 * append_text_to_file()- appends text to a file
 * @filename: filename
 * @text_content: text content
 *
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		if (errno == ENOENT)
		{
			return (1);
		}
		else
		{
			return (-1);
		}
	}
	if (text_content == NULL)
	{
		return (1);
	}
	bytes_written = write(fd, text_content, _strlen(text_content));
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

/**
 * _strlen()- strlen
 * @str: string
 *
 * Return: len
 */

int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
