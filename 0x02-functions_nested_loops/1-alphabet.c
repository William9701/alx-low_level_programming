#include <stdio.h>

/**
 * main - main
 * Return: always 0
 */
void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
}

int main(void)
{
	print_alphabet();
	putchar('\n');
	return (0);
}
