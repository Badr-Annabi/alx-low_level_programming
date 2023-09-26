#include "lists.h"

/**
 * find_listint_loop -  finds the loop in a linked list.
 * @head: Pointer to the first node.
 * Return: address of the node where the loop
 * starts, or NULL if there is no loop.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *loop, *node;

	if (!head)
		return (NULL);
	for (loop = head->next; loop != NULL; loop = loop->next)
	{
		if (loop == loop->next)
			return (loop);
		for (node = head; node != loop; node = node->next)
			if (node == loop->next)
				return (loop->next);
	}

	return (NULL);
}
