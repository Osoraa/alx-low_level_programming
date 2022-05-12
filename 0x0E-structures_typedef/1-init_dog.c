#include "main.h"
#include "dog.h"

/**
 * init_dog - Initializes the properties of a dog struct.
 *
 * @d: Pointer to the dog instance.
 * @name: Proposed name of the dog struct.
 * @age: Proposed age of the dog struct.
 * @owner: Proposed owner of the dog struct.
 *
 * Return: None.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
