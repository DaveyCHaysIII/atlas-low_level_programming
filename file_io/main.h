#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <sys/types.h>

int _putchar(char c);
int _strlen(char *str);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif
