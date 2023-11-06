#include "dog.h"
#include <stdlib.h>

/**
 * init_dog -  function that initialize a variable of type struct dog
 *
 * @d: pointer to struct dog
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = (struct dog *)malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
