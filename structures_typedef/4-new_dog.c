#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: pointer to the new dog (Success), NULL if fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int lname, lowner, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	for (lname = 0; name[lname] != '\0'; lname++)
		;

	for (lowner = 0; owner[lowner] != '\0'; lowner++)
		;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc((lname + 1) * sizeof(char));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc((lowner + 1) * sizeof(char));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	for (i = 0; i <= lname; i++)
		d->name[i] = name[i];

	for (i = 0; i <= lowner; i++)
		d->owner[i] = owner[i];

	d->age = age;

	return (d);
}
