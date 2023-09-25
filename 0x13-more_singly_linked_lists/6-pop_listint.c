#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: Pointer to the head of the list (first element).
 * Return: the head node’s data (n), or 0 if there is no header
 * (empty linked list).
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int i = 0;

	if (!*head || !head)
		return (0);
	node = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = node;
	return (i);
}
