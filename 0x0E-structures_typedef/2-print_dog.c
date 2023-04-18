#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
void print_dog(struct dog *d)
{
	if (d == NULL || d->name == NULL || d->owner == NULL)
	{
		printf("nil");
	}

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
