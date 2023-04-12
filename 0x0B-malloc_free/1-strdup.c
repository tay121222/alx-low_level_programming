#include <stdlib.h>
#include "main.h"
/**
 * _strdup -  function that returns a pointer to a newly allocated space
 * @str: string to allocate
 * Return: returns NULL or pointer to new new mem loc
 */
char *_strdup(char *str)
{
	int i = 0;
	int str_len = 0;
	char *new_loc;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[str_len] != '\0')
	{
		str_len++;
	}
	new_loc = malloc((str_len + 1) * sizeof(char));
	if (new_loc == (NULL))
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		new_loc[i] = str[i];
		i++;
	}

	new_loc[i] = '\0';

	return (new_loc);
}
