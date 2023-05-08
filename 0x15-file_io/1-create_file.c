#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
/**
 * create_file - create_file
 * @filename: filename
 * @text_content: text_content
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t nwrite, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fp == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len = strlen(text_content);
	}
	nwrite = write(fp, text_content, len);
	if (nwrite == -1)
	{
		close(fp);
		return (-1);
	}
	close(fp);

	return (1);
}


