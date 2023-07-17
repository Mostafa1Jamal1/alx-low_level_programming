#include "dog.h"
#include <stdlib.h>
/**
 * init_dog -  initialize a variable of type struct dog
 * @d: a pointer to struct dog
 * @name: string literal for the dog's name
 * @age: the age of the dog
 * @owner: string literal for the dog's owner name
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
			return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
