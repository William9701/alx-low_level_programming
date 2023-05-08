#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

/**
 * create_file - create_file
 * @filename: filename
 * @text_content: text_content
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int fp;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	fp = open(filename,  O_WRONLY | O_CREAT | O_EXCL, S_IRUSR |
	S_IWUSR | O_TRUNC, S_IRUSR);
	if (fp == -1)
	{
		return (-1);
	}
	close(fp);

	return (1);
}


