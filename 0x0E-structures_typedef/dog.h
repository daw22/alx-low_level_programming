#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct for dog type
 * @name: name of the dog
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: defines dog type with name, age and owner properties
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
