#include <stdlib.h>
#include "main.h"
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: NULL if ac or av == 0 or NULL or pointer to a ne string
 */
char *argstostr(int ac, char **av)
{
	int i = 0;
	int j = 0, k = 0, str_len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			str_len++;
			j++;
		}
		str_len++;
		i++;
	}
	str = malloc((str_len + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			str[k++] = av[i][j];
			j++;
		}
		str[k++] = '\n';
		i++;
	}
	str[k] = '\0';
	return (str);
}
