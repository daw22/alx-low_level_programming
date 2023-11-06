#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates new dog instance
 * @name: name of the new dog (string)
 * @age: age of the new dog (age)
 * @owner: owner of the new dog (string)
 *
 * Return: pointer to the new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nlen, olen;
	char *dname, *oname;
	dog_t *new_dog;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	nlen = strlen(name);
	olen = strlen(owner);
	dname = malloc(nlen + 1);
	if (dname == NULL)
		return (NULL);
	oname = malloc(olen + 1);
	if (oname == NULL)
		return (NULL);
	strcpy(dname, name);
	strcpy(oname, owner);

	new_dog->name = dname;
	new_dog->age = age;
	new_dog->owner = oname;

	return (new_dog);
}
