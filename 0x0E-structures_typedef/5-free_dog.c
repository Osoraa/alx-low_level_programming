#include "main.h"
#include "dog.h"

/**
 * free_dog - Frees the dog struct passed.
 * @d: Pointer to a typedef'd dog_t.
 *
 * Return: None.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
