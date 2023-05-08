#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: the name of the file to read.
 * @letters: number of letters it should read and print.
 * Return: number of letters it could read and print
 * 0, if the file can not be opened or read and if filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w;
	char *buffer;
	int fd;

	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	r = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);
	free(buffer);
	close(fd);
	return (w);
}
