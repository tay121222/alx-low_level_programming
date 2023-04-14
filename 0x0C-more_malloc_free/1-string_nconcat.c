#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string to concat
 * @s2: second string to concat
 * @n: prefered size for s2
 *
 * Return: returns NULL or concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	unsigned int s1_len = 0, s2_len = 0, n_len;
	char *concat_string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[s1_len])
		s1_len++;
	while (s2[s2_len])
		s2_len++;
	if (n >= s2_len)
	{
		n_len = s2_len;
	}
	else
	{
		n_len = n;
	}
	concat_string = malloc((s1_len + n_len + 1) * (sizeof(char)));
	if (concat_string == NULL)
		return (NULL);
	while (i < s1_len)
	{
		*(concat_string + i) = *(s1 + i);
		i++;
	}
	while (j < n)
	{
		*(concat_string + i) = *(s2 + j);
		i++;
		j++;
	}
	*(concat_string + i) = '\0';

	return (concat_string);
}
