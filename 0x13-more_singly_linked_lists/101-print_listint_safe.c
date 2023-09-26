#include "lists.h"

/**
 * allocating - allocating memory for an array of pointers.
 * @old_list: old list.
 * @size: size of new list
 * @new_node: new node added to the limked list.
 * Return: pointer to the new list.
 */

const listint_t **allocating(const listint_t **old_list,
		size_t size, const listint_t *new_node)
{
	const listint_t **new_list;
	size_t i;

	new_list = malloc(size * sizeof(listint_t *));
	if (new_list == NULL)
	{
		free(old_list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		new_list[i] = old_list[i];
	new_list[i] = new_node;
	free(old_list);
	return (new_list);
}



/**
 * print_listint_safe -  prints a listint_t linked list.
 * @head: Pointer to the first element.
 * Return:  the number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;
	const listint_t **list = NULL;

	while (head)
	{
		for (i = 0; i < num; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = allocating(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
