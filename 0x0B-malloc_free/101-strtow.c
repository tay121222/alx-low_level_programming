#include <stdlib.h>
#include "main.h"
/**
 * count_words - counts number of words in parameter str
 * @str: the string to count
 *
 * Return: the number of words in string
 */
int count_words(char *str)
{
	int i, num_words = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			num_words++;
		}
	}
	return (num_words);
}

/**
 * set_words - get memory for array of words
 * @num_words: number of words in string
 *
 * Return: array of string
 */
char **set_words(int num_words)
{
	int i;
	char **words;

	words = malloc((num_words + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	for (i = 0; i < num_words; i++)
		words[i] = NULL;

	words[num_words] = NULL;

	return (words);
}
/**
 * free_words - frees memory allocation
 * @words: words to free
 * @words_count: number of words in array
 */
void free_words(char **words, int words_count)
{
	int i;

	for (i = 0; i < words_count; i++)
		free(words[i]);

	free(words);
}

/**
 * strtow - function that splits a string into words
 * @str: string to split
 *
 * Return: array of words in string
 */
char **strtow(char *str)
{
	int i, j, k, words_count = 0, str_len = 0;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	words_count = count_words(str);

	if (words_count == 0)
		return (NULL);

	words = set_words(words_count);

	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; i < words_count; i++)
	{
		while (str[j] == ' ')
			j++;

		for (k = 0; str[j + k] != ' ' && str[j + k] != '\0'; k++)
			str_len++;

		words[i] = malloc((str_len + 1) * sizeof(char));

		if (words[i] == NULL)
		{
			free_words(words, i);
			return (NULL);
		}
		for (k = 0; k < str_len; k++)
			words[i][k] = str[j + k];

		words[i][k] = '\0';
		j += str_len;
		str_len = 0;
	}

	return (words);
}
