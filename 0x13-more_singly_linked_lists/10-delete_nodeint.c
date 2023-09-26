#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list.
 * @head: Pointer to the first element of the list.
 * @index: the exact mode that we want to delete.
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *pv_node;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;

	while (node)
	{
		if (i == index)
		{
			pv_node->next = node->next;
			free(node);
			return (1);
		}
		i++;
		pv_node = node;
		node = node->next;
	}
	return (-1);

}
