#ifndef DOG_H_
#define DOG_H_
#include <stdlib.h>
/**
 * struct dog- a structure of dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: dog's owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H_*/