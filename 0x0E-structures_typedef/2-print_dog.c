#include "main.h"
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
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)");

		if (d->age != '\0')
			printf("Age: %f\n", d->age);
		else
			printf("Age: (nil)");

		if (d->name != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)");
	}
}
