#ifndef DOG
#define DOG

/**
 * struct dog - A dog class
 *
 * @name: Name of the dog instance.
 * @age: Age of the dog instance.
 * @owner: Owner of the dog.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG */
