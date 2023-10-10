#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog
 * @d: a pointer to a struct dog to print
 *
 * Return: void.
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : ("nil"));
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : ("nil"));
	}
}
