#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * new_dog - creates a new dog.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the owner name.
 * Return: a pointer to a the new dog.
 * or NULL on failing.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int i, nameL = 0, ownerL = 0;
	/* Check if NULL is passed */
	if (name == NULL || owner == NULL)
		return (NULL);
	/* Allocate memory for new and check if fails*/
	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	/* Compute the length of the name */
	while (name[nameL])
		nameL++;
	/* Allocate memory for the copy of name and check if fails */
	new->name = malloc(nameL + 1);
	if (new->name == NULL)
	{/* Free previous allocated memory on fail */
		free(new);
		return (NULL);
	}	/* Copy the name to allocated memory */
	for (i = 0; i <= nameL; i++)
		new->name[i] = name[i];
	/* Copy age to the new->age */
	new->age = age;
	/* Compute the length of owner*/
	while (owner[ownerL])
		ownerL++;
	/* Allocate memory for the copy of owner and check if fails*/
	new->owner = malloc(ownerL + 1);
	if (new->owner == NULL)
	{/* Free previous allocated memory on fail */
		free(new->name);
		free(new);
		return (NULL);
	}
	/* Copy the owner to allocated memory */
	for (i = 0; i <= ownerL; i++)
		new->owner[i] = owner[i];
	return (new);
}
