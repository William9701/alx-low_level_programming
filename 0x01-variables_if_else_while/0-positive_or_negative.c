#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - to print weather posivive or neg or zero
 *Return: Return (0)
 */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					scanf("%d", &n);
					if (n > 0)
						{
						printf("%d is positive\n", n); }
					if (n == 0)
					{
						printf("%d is zero\n", n); }
					if (n < 0)
					{
						printf("%d is negative\n", n); }
					return (0);
}
