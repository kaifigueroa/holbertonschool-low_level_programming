#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the attributes of a struct dog
 * @d: Pointer to struct dog to print
 *
 * Description: Prints the name, age, and owner of a dog struct.
 * If any element of 'd' is NULL, prints "(nil)" instead.
 */
void print_dog(struct dog *d)

{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
