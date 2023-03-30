#include "main.h"

/**
 * rev_string  - prints characters in reverse
 * @s: string to print in reverse
 */
void rev_string(char *s)
{
	int len = 0, lent = 0;
	int i;
	char hold;

	while (s[len] != '\0')
	{
		len++;
	}
	lent = len - 1;
	for (i = 0; i < len / 2; i++)
	{
		hold = s[i];
		s[i] = s[lent];
		s[lent--] = hold;
	}
}
