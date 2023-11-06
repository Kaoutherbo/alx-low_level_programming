#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - function that creates a new dog.
 * @name:name of he dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	if (!newDog)
		return (NULL);
	newDog->name = strdup(name);
	if (!newDog->name)
	{
		free(newDog);
		return (NULL);
	}
	newDog->age = age;
	newDog->owner = strdup(owner);
	if (!newDog->owner)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	return (newDog);
}

