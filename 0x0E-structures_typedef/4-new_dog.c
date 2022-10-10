#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - a function that creates a new dog.
 *
 * @name: name of dog.
 * @age: age of dog.
 * @owner: dog's owner.
 * Return - dog_t*
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
		return (d);
	}
}