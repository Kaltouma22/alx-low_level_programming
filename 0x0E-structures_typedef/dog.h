#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct dog
 * @name: the dog name
 * @age: dog age
 * @owner: owner name
 *
 * Description: just a lone dog struct in a big world
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
