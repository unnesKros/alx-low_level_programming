#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initialize th dog struct
 * @d: the struct
 * @name: the name of the dog
 * @age: age of the dog
 * @owner: dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;

	}
}
