#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - main
 * @argc: input
 * @argv: input
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int result = 0;
	int i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *d = argv[i];

		for (j = 0; d[j] != '\0'; j++)
		{
			if (!isdigit(d[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(d);
	}
	printf("%d\n", result);
	return (0);
}
