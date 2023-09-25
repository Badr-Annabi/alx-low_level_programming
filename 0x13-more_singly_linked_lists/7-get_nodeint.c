#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list.
 * @head: pointer to the header.
 * @index: the index of the node, starting at 0.
 * Return: Pointer.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int n;

	for (n = 0, node = head; n < index && node; node = node->next, n++)
		;
	return (node);
}
