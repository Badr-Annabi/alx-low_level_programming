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

	node = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		node = node->next;
		if (node == NULL)
			return (NULL);
	}
	if (node->next == NULL)
                return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = node;
	new_node->next = node->next;
	node->next->prev = new_node;
	node->next = new_node;

	return (new_node);

}
