#include "lists.h"

/**
 * _strlen - returns length of str (h->str).
 * @str: the input.
 * Return: length.
 */
int _strlen(char *str)
{
	int i = 0;

	if (!str)
		return (0);
	while (*str++)
		i++;
	return (i);
}






/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", _strlen(h->str), h->str);
		else
			printf("[0] (nil)\n");
		count += 1;
		h = h->next;
	}
	return (count);
}
