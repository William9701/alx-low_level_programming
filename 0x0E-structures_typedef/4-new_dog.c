#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: ptr
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;
	int i, j;

	i = strlen(name);
	j = strlen(owner);

	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
		return (NULL);

	dog1->name = malloc(sizeof(char) * (i + 1));
	if (dog1->name == NULL)
	{
		free(dog1);
		return (NULL);
	}
	dog1->owner = malloc(sizeof(char) * (j + 1));
	if (dog1->owner == NULL)
	{
		free(dog1);
		free(dog1->name);
		return (NULL);
	}
	strcpy(dog1->name, name);
	strcpy(dog1->owner, owner);
	dog1->age = age;

	return (dog1);
}
