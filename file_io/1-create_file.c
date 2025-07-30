#include "main.h"

/**
 * create_file - creates a file and writes text content to it
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * * Return: 1 on success, -1 on failure
 * If the file already exists, it truncates the file to zero length
 * If filename is NULL, return -1
 * If text_content is NULL, create an empty file
 * If the file cannot be created or written to, return -1
 * If the file cannot be closed, return -1
 * If the file is created successfully, return 1
 * If the file cannot be created, return -1
 * If the file is created successfully, return 1
 * If the file cannot be created, return -1
 * If the file is created successfully, return 1
 * If the file cannot be created, return -1
 * If the file is created successfully, return 1
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

if (text_content != NULL)
{
	while (text_content[len] != '\0')
	{
		len++;
	}
	if (write(fd, text_content, len) != len)
	{
		close(fd);
		return (-1);
	}
}

	if (close(fd) == -1)
	{
		return (-1);
	}

	return (1);
}

