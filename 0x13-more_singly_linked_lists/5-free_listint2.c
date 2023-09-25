#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to the first list element.
 * Return: Nothing (void).
 */

void free_listint2(listint_t **head)
{
	listint_t *node, *f_head;

	if (!head)
		return;
	node = *head;
	while (node)
	{
		f_head = node;
		node = node->next;
		free(f_head);
	}
	*head = NULL;

}
