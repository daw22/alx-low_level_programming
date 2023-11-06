#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints contents od a dog struct
 * @d: pointer to dog struct
 */
void print_dog(struct dog *d)
{
	char *nil = "(nil)";

	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : nil);
		if (d->age)
			printf("Age: %f\n", d->age);
		else
			printf("Age: %s\n", nil);
		printf("Owner: %s\n", d->owner ? d->owner : nil);
	}
}
