#include "dog.h"

/**
 * new_dog - Crestes a new instance of the dog.
 *
 * @name: name of the new dog.
 * @age: New dog's age in human years.
 * @owner: Owner of the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_dog = {name, age, owner};

	return (&new_dog);
}
