#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * str_len - function returns length of string
 * @str: string to get its length
 *
 * Return: returns length
 */
int str_len(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * str_cpy - function copies string to a new buffer
 * @str: the string to copy
 * @len: length pf string
 *
 * Return: buffer pointer
 */
char *str_cpy(char *str, int len)
{
	char *buf;
	int i;

	buf = malloc((len + 1) * sizeof(char));
	if (buf == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		buf[i] = str[i];
	}
	return (buf);
}

/**
 * new_dog - creates a new dog data
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: new dog pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int name_len = str_len(name);
	int owner_len = str_len(owner);

	newDog = malloc(sizeof(struct dog));
	if (newDog == NULL)
		return (NULL);

	(*newDog).name = str_cpy(name, name_len);
	(*newDog).age = age;
	(*newDog).owner = str_cpy(owner, owner_len);

	if ((*newDog).name == NULL || (*newDog).owner == NULL)
	{
		free((*newDog).name);
		free((*newDog).owner);
		free(newDog);
		return (NULL);
	}

	return (newDog);
}
