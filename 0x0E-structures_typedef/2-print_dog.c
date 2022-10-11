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
	else
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s", d->name);
		printf("Age: %d\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)");
		else
			printf("Owner: %s", d->name);
	}
}
