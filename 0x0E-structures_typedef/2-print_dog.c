#include "dog.h"

/**
 * print_dog - a function that prints a struct dog.
 * @d: pointer to strct dog.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		if (d->name == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("%s\n", d->name);
		}
		printf("Age: ");
		printf("%f\n", d->age);
		printf("Owner: ");
		if (d->owner == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("%s\n", d->owner);
		}
	}
}
