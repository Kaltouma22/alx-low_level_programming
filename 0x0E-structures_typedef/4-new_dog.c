#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - function for get length of a string
 * @s: a string that get the length
 *
 * Return: return len
 */

int _strlen(const char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}

/**
 * _strcopy - that return a t with copy of a string in r
 * @r: is a string for cpy
 * @t: place for cpy string
 * Return: return t
 */

char *_strcopy(char *t, char *r)
{
	int j = 0;

	while (r[j])
	{
		t[j] = r[j];
		j++;
	}
	t[j] = '\0';

	return (t);
}

/**
 * new_dog - that creates a new dog
 * @name: the name's dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: struct pointer dog and Null if fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Ndog;

	if (!name || age < 0 || !owner)
	{
		return (NULL);
	}
	Ndog = (dog_t *) malloc(sizeof(dog_t));
	if (Ndog == NULL)
		return (NULL);

	Ndog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*Ndog).name == NULL)
	{
		free(Ndog);
		return (NULL);
	}
	Ndog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*Ndog).name == NULL)
	{
		free(Ndog->name);
		free(Ndog);
		return (NULL);
	}
	Ndog->name = _strcopy(Ndog->name, name);
	Ndog->age = age;
	Ndog->owner = _strcopy(Ndog->owner, owner);

	return (Ndog);
}
