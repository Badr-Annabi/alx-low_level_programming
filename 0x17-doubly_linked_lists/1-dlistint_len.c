#include "lists.h"
/**
 * dlistint_len - returns the number of elements
 * @h: pointer to the head of the list.
 *
 * Return: size of it.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}
	return (size);
}
