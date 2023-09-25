#include "lists.h"

/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list.
 * @head: pointer to the first element.
 * @n: node's value
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *mover_node;

	if (!new_node || !head)
		return (NULL);
	new_node->next = NULL;
	new_node->n = n;

	if (!*head)
		*head = new_node;
	else
	{
		mover_node = *head;
		while (mover_node->next)
			mover_node = mover_node->next;
		mover_node->next = new_node;
	}
	return (new_node);
}
