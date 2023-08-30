#include "main.h"

/**
 * len - counting lenght of the same string
 * @s: the string that we want to know its length.
 * Return: length of that string.
 */
int _len(char *s);

/**
 * _helper_palindrome - the actuale checker of palindrome.
 * @s: input string.
 * @i: indicator (manages our incrementing).
 * @len: length of the same string.
 * Return: 1 if the string is palindrome, 0 if not.
 */
int _helper_palindrome(char *s, int i, int len);


/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not.
 * @s: the string that we want to check.
 * Return: 1 is the string is palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (0);
	return (_helper_palindrome(s, 0, _len(s)));
}

/**
 * _len - counting lenght of the same string
 * @s: the string that we want to know its length.
 * Return: length of that string.
 */

int _len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _len(s + 1));
}

/**
 * _helper_palindrome - the actuale checker of palindrome.
 * @s: input string.
 * @i: indicator (manages our incrementing).
 * @len: length of the same string.
 * Return: 1 if the string is palindrome, 0 if not.
 */

int _helper_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	else if (i >= len)
		return (1);
	return (_helper_palindrome(s, i + 1, len - 1));
}
