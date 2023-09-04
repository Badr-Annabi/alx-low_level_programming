#include "main.h"
#include <stdlib.h>
/**
 * str_concat -  concatenates two strings.
 * @s1: first string.
 * @s2: second string that we want to concatenate.
 * Return: the array which is allocated with
 * the concatenated strings.
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, sum, i, j;
	char *ptr;

	len1 = 0;
	len2 = 0;
	sum = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	sum = len1 + len2;

	ptr = malloc(sizeof(char) * (sum + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];
	for (j = 0; s2[j]; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
