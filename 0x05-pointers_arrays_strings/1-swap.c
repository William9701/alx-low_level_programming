#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * swap_int - swap_int
 * @a: number to be swaped
 * @b: number to be swped with
 * Rwturn: nothing
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
