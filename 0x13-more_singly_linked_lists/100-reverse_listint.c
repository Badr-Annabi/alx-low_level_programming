#include "lists.h"

/**
 * reverse_listint -  reverses a listint_t linked list.
 * @head: Pointer to the first element.
 * Return: a pointer to the first node of the reversed list.
 */


listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node = NULL, *node = NULL;

	if (!head || !*head)
		return (NULL);
	node = *head;
	*head = NULL;
	while (node)
	{
		next_node = node->next;
		node->next = *head;
		*head = node;
		node = next_node;
	}
	return (*head);
}
