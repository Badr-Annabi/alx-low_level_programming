#include "lists.h"
/**
 * insert_dnodeint_at_index -  inserts a new node
 * at a given position.
 * @h: pointer to the head of the list
 * @idx:  the index of the list where
 * the new node should be added. Index starts at 0
 * @n: the value of the new node.
 *
 * Return:  the address of the new node,
 * or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *new_node;
	unsigned int i = 0;

	node = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (node != NULL && i < idx - 1)
	{
		node = node->next;
		i++;
	}
	if (node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->prev = node;
	new_node->next = node->next;
	node->next->prev = new_node;
	node->next = new_node;

	if (node->next == NULL)
		return (add_dnodeint_end(h, n));

	return (new_node);

}
