#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string.
 * @s: string to capitalize
 * Return: returns capitalized string
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char a[] = " \t\n,;.!?\"(){}";

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
			{
				s[i] -= 'a' - 'A';
			}
			else
			{
				j = 0;
				while (j <= 12)
				{
					if (a[j] == s[i - 1])
					{
						s[i] -= 'a' - 'A';
					}
					j++;
				}
			}
		}
		i++;
	}
	return (s);
}
