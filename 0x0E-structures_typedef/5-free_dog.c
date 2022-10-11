#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - a function that frees dogs.
 * @d: pointer to the dog structures.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		d->name = NULL;
		d->owner = NULL;
		d->age = 0;
		free(d);
	}
	else
		return (NULL);
}
