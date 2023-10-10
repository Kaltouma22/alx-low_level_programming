#include <stdio.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: a pointer to a struct dog
 * @name: a pointer to character string representing nam's dog
 * @age: a floating-pointer number representing age dog
 * @owner: a pointer a character representing the owner's name
 * struct dog - the dog struct
 *
 * Description: the init_god function initializes a struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
