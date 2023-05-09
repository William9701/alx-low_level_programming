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
 * main - main
 * @argc: argc count
 * @argv: argument line
 * Return: 1
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	FILE *from, *to;
	size_t c;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to");
		exit(97);
	}
	from = fopen(argv[1], "r");
	if (from == NULL)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to = fopen(argv[2], "w+");
	if (to == NULL)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[2]);
		exit(99);
	}
	if (chmod(argv[2], S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH) == -1)
	{
		perror("chmod() failed");
		return (-1);
	}
	while ((c = fread(buffer, sizeof(char), sizeof(buffer), from)) > 0)
	{
		if (fwrite(buffer, sizeof(char), c, to) != c)
		{
			fprintf(stderr, "Error: Can't read from file");
			fclose(from);
			fclose(to);
			return (-1);
		}
	}
	close_file(to);
	close_file(from);
	return (0);
}

/**
 * close_file - close_file
 * @from: file
 */
void close_file(FILE *from)
{
	int f;

	f = fileno(from);
	if (fclose(from) == EOF)
	{
		fprintf(stderr, "Error: Can't close fd %d", f);
		exit(100);
	}
}
