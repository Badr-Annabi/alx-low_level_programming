#include "main.h"

/**
* leet - encodes a string into 1337.
* @str: input
* Return: character
*/

char *leet(char *str)
{
	int i, j;

	char mod[] = "aAeEoOtTlL";
	char ch[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == mod[j])
			{
				str[i] = ch[j];
			}
		}
	}
	return (str);
}
