#include "main.h"

/**
* rev_string - Write a function that reverses a string.
* @s: input
*/
void rev_string(char *s)
{
	char rev = s[0];
	int l = 0;
	int i;

	while (s[l] != '\0')
	{
		l++;
	}
	for (i = 0; i < l; i++)
	{
		l--;
		rev = s[i];
		s[i] = s[l];
		s[l] = rev;
	}

}
