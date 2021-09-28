#include "dog.h"

/**
 * init_dog - initialize the dog struct
 * @d: the dog
 * @name: name
 * @age: age
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
