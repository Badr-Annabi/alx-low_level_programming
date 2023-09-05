#include "main.h"
#include <stdlib.h>

int count_helper(char *str);

/**
 * count_helper - counts how many words in the string str.
 * @str: the string.
 * Return: number of words (count).
 */

int count_helper(char *str)
{
	int checker, i, count;

	checker = 0;
	count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			checker = 0;
		else if (checker == 0)
		{
			checker = 1;
			count++;
		}
	}
	return (count);
}


/**
 * strtow - splits a string into words.
 * @str: input string.
 * Return: string.
 */

char **strtow(char *str)
{
	int i, j, k, len, w, start, end;
	char **ptr1, *ptr2;

	k = 0;
	j = 0;
	len = 0;

	while (*(str + len))
		len++;
	w = count_helper(str);
	if (w == 0)
		return (NULL);

	ptr1 = (char **) malloc(sizeof(char *) * (w + 1));
	if (ptr1 == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (k)
			{
				end = i;
				ptr2 = (char *) malloc(sizeof(char) * (k + 1));

				if (ptr2 == NULL)
					return (NULL);
				while (start < end)
					*ptr2++ = str[start++];
				*ptr2 = '\0';
				ptr1[j] = ptr2 - k;
				j++;
				k = 0;
			}
		}
		else if (k++ == 0)
			start = i;
	}
	ptr1[j] = NULL;

	return (ptr1);
}
