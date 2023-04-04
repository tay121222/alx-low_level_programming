#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: string to look for substring in
 * @needle: substring to find in @haystack
 * Return: returns found string or NULL if string not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *hay;
	char *need;

	while (*haystack)
	{
		hay = haystack;
		need = needle;
		while (*haystack && *needle && (*haystack == *need))
		{
			haystack++;
			need++;
		}
		if (*need == '\0')
		{
			return (hay);
		}
		haystack = hay + 1;
	}
	return (NULL);
}
