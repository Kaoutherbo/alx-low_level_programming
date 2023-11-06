#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new type
 * @name: dog's name
 * @age: dog's age
 * @owner: dog owner' name
 * Description: we create a new type calls dog struct
 * containing the name, age and owner's name.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
