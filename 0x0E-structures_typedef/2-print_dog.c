#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - a function that prints a dog structure.
 * @d: pointer to the dog structure.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf(" ");
	if (d->age == 0 || d->name == NULL || d->owner == NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\nAge: %f\nOwner: %s", d->age, d->owner);
		else if (d->age == 0)
			printf("Name: %s\nAge: (nil)\nOwner: %s", d->name, d->owner);
		else if (d->owner == NULL)
			printf("Name: %s\nAge: %f\nOwner: (nil)", d->name, d->age);
	}
}
