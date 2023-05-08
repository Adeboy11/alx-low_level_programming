#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include "holberton.h"

/**
 * append_text_to_file - this function add texts to the  end of file
 * @filename: name of variable file
 * @text_content: texts
 *
 * Return: 1 for success or -1 for failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, fdwr = 0, ind = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (text_content[ind] != '\0')
	{
		ind++;
	}
	fdwr = write(fd, text_content, ind);
	if (fdwr == -1)
		return (-1);
	close(fd);
	return (1);
}
