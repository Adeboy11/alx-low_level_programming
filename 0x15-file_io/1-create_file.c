#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * create_file - this fuinction create a file
 * @filename: name of the variable file to create
 * @text_content: textinput into the file
 *
 * Return: 1 for success, -1 for failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd = 0, fdwr = 0, ind = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";
	while (text_content[ind] != '\0')
		ind++;

	fdwr = write(fd, text_content, ind);
	if (fdwr == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
