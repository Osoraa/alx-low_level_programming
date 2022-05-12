#ifndef DOG
#define DOG

/**
 * struct dog - A dog class
 *
 * @name: Name of the dog instance.
 * @age: Age of the dog instance.
 * @owner: Owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG */
