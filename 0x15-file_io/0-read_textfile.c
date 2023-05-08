#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile -  reads file and prints to the standard output
 * @filename: pointer file to read
 * @letters: variable letters to print
 *
 * Return: the number of read bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fdw = 0;
	int fd = 0;
	int fdr = 0;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	fdr = read(fd, buff, letters);
	if (fdr == -1)
	{
		free(buff);
		return (0);
	}
	fdw = write(STDOUT_FILENO, buff, fdr);
	if (fdw == -1 || fdw != fdr)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(fd);
	return (fdr);
}
