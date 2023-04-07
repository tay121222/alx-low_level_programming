#include "main.h"
/**
 * get_len - get length of string
 * @s: string to length of
 * Return: the length of string
 */
int get_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + get_len(s + 1));
}

/**
 * check_chars - checks for characters of string
 * @s: string to check characters
 * @i: used to traverse the string s
 * @j: used to traverse the string s
 * Return: returns 1 if is a palindrome and 0 if is not
 */
int check_chars(char *s, int i, int j)
{
	if (i >= j)
	{
		return (1);
	}
	if (s[i] != s[j])
		return (0);
	return (check_chars(s, (i + 1), (j - 1)));

}

/**
 * is_palindrome - checks if strings are palindrome or not
 * @s: string to check if is palindrone
 * Return: returns 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int len;

	len = get_len(s);
	if (len <= 1)
		return (1);
	return (check_chars(s, 0, len - 1));
}
