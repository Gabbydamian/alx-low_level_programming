#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a variable for a struct
 * @d: pointer to structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
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