#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the head of the list.
 * @index: is the index of the node, starting from 0.
 * Return: the element in the specific index, or NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i = 0, len = 0;

	node = head;
	while (node)
	{
		if (i == index)
			return (node);
		node = node->next;
		i++;
		len++;
	}
	return (NULL);
}
