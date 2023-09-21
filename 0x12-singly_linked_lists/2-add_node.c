#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to the header of the list.
 * @str: string that we want to add, also it
 * needs to be duplicated.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_header = malloc(sizeof(list_t));

	if (!new_header || !head)
		return (NULL);
	else if (str)
	{
		new_header->str = strdup(str);

		if (!new_header->str)
		{
			free(new_header);
			return (NULL);
		}
		new_header->len = _strlen(new_header->str);
	}
	new_header->next = *head;
	*head = new_header;

	return (new_header);
}
