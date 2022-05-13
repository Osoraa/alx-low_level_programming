#include "dog.h"

/**
 * print_dog - Prints the members of the dog struct.
 * @d: Dog struct to print it's members.
 *
 * Return: None.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
		printf("Name: %s\nAge: %d\nOwner: %s\n", d->name, d->age, d->owner);
}
