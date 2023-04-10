#include <stdio.h>

/**
 * main - main
 * @argc: input
 * @argv: input
 * Return: 0
 */

int main(int argc, char *argv[])
{

		printf("%d\n", argc - 1);
		return (0);

		if (argc < 0)
		{
		int i;

		for (i = 0; i < argc; i++)
			printf("%s", argv[i]);
		return (0);
		}
}
