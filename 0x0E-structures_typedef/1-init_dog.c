#include <stdio.h>
#include "dog.h"
/**
 ** init_dog - initialiazes a dog structure.
 ** @d: pointer to dog structure.
 ** @name: name of dog.
 ** @age: age of dog.
 ** @owner: dog's owner.
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)

{

	d->name = name;

	d->age = age;

	d->owner = owner;
};
