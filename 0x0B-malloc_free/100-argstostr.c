#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: first argument.
 * @av: second argument.
 * Return: character.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *ptr;

	k = 0;
	len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
	}
	len += ac;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
		if (ptr[k] == '\0')

			ptr[k++] = '\n';

	}
	return (ptr);

}
