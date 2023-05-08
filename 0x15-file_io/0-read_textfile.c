#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - read_textfile
 * @filename: filename
 * @letters: size
 * Return: count
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int pf;
	char *buffer;
	ssize_t nread;
	ssize_t nwritten;

	if (filename == NULL)
	{
		return (0);
	}
	pf = open(filename, O_RDONLY);
	if (pf == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(pf);
	return (0);
	}

	nread = read(pf, buffer, letters);
	if (nread == -1)
	{
		close(pf);
		free(buffer);
		return (0);
	}

	nwritten = write(STDOUT_FILENO, buffer, nread);
	if (nwritten == -1)
	{
		close(pf);
		free(buffer);
		return (0);
	}
	close(pf);
	free(buffer);
	return (nwritten);
}
