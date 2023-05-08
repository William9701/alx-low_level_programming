#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>

int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t nwrite;

	if (filename == NULL)
	{
		return (-1);
	}

	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		nwrite = write(fp, text_content, strlen(text_content));
		if (nwrite == -1)
		{
			return (-1);
		}
	}
	return (1);
}
