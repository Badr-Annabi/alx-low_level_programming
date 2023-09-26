#include "lists.h"

/**
 * find_loop - finds a loop in the list.
 *
 * @head: Pointer to the linked list.
 * Return: adress to the node where the loop starts.
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

/**
 * free_listint_safe -  frees a listint_t list.
 * @h: Pointer to the first node.
 * Return: the size of the list that was free’d.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *node, *next;
	size_t len;
	int i = 1;

	if (h == NULL || *h == NULL)
		return (0);

	node = find_listint_loop(*h);
	for (len = 0; (*h != node || i) && *h != NULL; *h = next)
	{
		len++;
		next = (*h)->next;
		if (*h == node && i)
		{
			if (node == node->next)
			{
				free(*h);
				break;
			}
			len++;
			next = next->next;
			free((*h)->next);
			i = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (len);
}
