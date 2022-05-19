#include "dog.h"
#include "main.h"

/**
 * new_dog - Creates a new instance of the dog.
 *
 * @name: name of the new dog.
 * @age: New dog's age in human years.
 * @owner: Owner of the new dog.
 *
 * Return: Pointer to new_dog or NULL on error.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *dog_name;
	char *dog_owner;

	/* Check for NULL input */
	if (!(name) || !(owner))
		return (NULL);

	/* Allocate memory appropriately */
	new_dog = malloc(sizeof(dog_t));
	dog_name = malloc(strlen(name) + 1);
	dog_owner = malloc(strlen(owner) + 1);
	if (!(new_dog) || !(dog_name) || !(dog_owner))
	{
		free(new_dog);
		free(dog_name);
		free(dog_owner);
		return (NULL);
	}

	/* Keep a static copy of input strings */
	strcpy(dog_name, name);
	strcpy(dog_owner, owner);

	/* Initialize new_dog */
	new_dog->name = dog_name;
	new_dog->age = age;
	new_dog->owner = dog_owner;

	return (new_dog);
}
