#include "dog.h"

/**
 * new_dog - a function that creates a new dog.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: dog's owner name.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		return (NULL);
		free(new_dog);
	}
	new_dog->owner = malloc(strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		return (NULL);
		free(new_dog);
		free(new_dog->name);
	}
	strcpy(new_dog->owner, owner);
	strcpy(new_dog->name, name);
	new_dog->age = age;
	return (new_dog);
}
