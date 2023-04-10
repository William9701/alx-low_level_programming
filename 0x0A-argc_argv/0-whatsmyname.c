#include <stdio.h>

/**
 * main - main
 * @argc: arg
 * @argv: input
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[0]);
	return (0);
}
