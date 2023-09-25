#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to the first node.
 * Return: number of elements(list's size).
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
