#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free's dog instances from memory
 * @d: pointer to a dog instance to be freed
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
