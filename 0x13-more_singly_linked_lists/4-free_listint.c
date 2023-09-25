#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the first element.
 * Return: nothing (void).
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
