#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: the name of the file to create.
 * @text_content: a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, length = 0, w;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[length])
			length++;
		w = write(fd, text_content, length);
		if (w == -1 || w != length)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
