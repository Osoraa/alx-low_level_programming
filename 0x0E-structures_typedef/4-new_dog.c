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
	dog_t *new_dog = malloc(sizeof(dog_t));
	char *dog_name;
	char *dog_owner;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog_name = malloc(strlen(name) + 1);
	dog_owner = malloc(strlen(owner) + 1);

	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	strcpy(dog_name, name);
	strcpy(dog_owner, owner);

	new_dog->name = dog_name;
	new_dog->age = age;
	new_dog->owner = dog_owner;

	return (new_dog);
}
