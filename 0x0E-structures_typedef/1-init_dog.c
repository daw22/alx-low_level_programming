#include "dog.h"
/**
 * init_dog - initialize dog struct
 * @d: pointer to the struct
 * @name: input dog name (string)
 * @age: input dog age (float)
 * @owner: input dog owner (string)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
