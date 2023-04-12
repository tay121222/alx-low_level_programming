#include <stdlib.h>
#include "main.h"
/**
 * str_concat - function that concatenates two strings
 * @s1: first string to concat
 * @s2: second string to concat
 * Return: returns null on failure of concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int s1_len = 0;
	int s2_len = 0;
	char *new_loc;
	int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;
	new_loc = malloc((s1_len + s2_len + 1) * sizeof(char));

	if (new_loc == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		new_loc[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		new_loc[i + j] = s2[j];
		j++;
	}
	new_loc[i + j] = '\0';

	return (new_loc);
}
