#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: variable to initialize
 * @name: name parameter
 * @age: age parameter
 * @owner: owner parameter
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
