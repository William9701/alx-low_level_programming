#ifndef DOG_H
#define DOG_H
/**
 * struct dog - input
 * @name: input
 * @age: inpit
 * @owner: owner
 * Description: longer desp
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

/**
 * dog_t - dog_t
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

