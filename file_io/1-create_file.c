#include "main.h"
#include <fcntl.h>
#include <stddef.h>
#include <sys/types.h>
#include <stdlib.h>

/**
 * create_file()- create a file!
 * @filename: name of file
 * @text_content: content of text
 *
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}

	bytes_written = write(fd, text_content, _strlen(text_content));
	if (bytes_written == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}

/**
 * _strlen()- length of string
 * @str: string in question
 *
 * Return: lenght
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
