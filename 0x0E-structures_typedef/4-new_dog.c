#include <stddef.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 *
 * @name: name parameter
 * @age: age parameter
 * @owner: owner parameter
 *
 * Return: a new dog
 */
dog_t *new_dog(char *name, float age __attribute__((unused)), char *owner)
{
	dog_t *d;

	d = malloc(sizeof(struct dog));

	if (d == NULL)
	{
		return (NULL);
	}

	d->name = name;
	d->owner = owner;

	return (d);
}
