#include "list.h"

/**
 * print_dlistint - prints all the elements of
 * a dlistint_t list.
 * @h: pointer to the head of the list.
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint *node = h;
	size_t size = 0;

	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
		size++;
	}
	return (size);
}
