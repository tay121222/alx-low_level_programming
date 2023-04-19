#include "dog.h"
#include <stdio.h>
/**
 * init_dog - function initialize a variable of type struct dog
 * @d: pointer to struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
