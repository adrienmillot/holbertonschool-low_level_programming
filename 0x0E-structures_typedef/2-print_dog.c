#include <stddef.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struc dog
 *
 * @d: data to print
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", (d->name) ? d->name : "(nil)");
	if (d->age > 0)
		printf("Age: %f\n", d->age);
	else
		printf("Age: %s\n", "(nil)");
	printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
}
