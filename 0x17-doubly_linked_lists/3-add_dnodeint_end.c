#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the head of the list.
 * @n: the value of the node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *node;

	new_node = malloc(sizeof(dlistint_t));
	if (!head)
		return (NULL);
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
	}

	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		(node)->next = new_node;
		new_node->prev = *head;
	}
	return (new_node);
}
