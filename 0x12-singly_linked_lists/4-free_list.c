#include "lists.h"

/**
 * free_list -  frees a list_t list.
 * @head: pointer to head node0
 */

void free_list(list_t *head)
{
	list_t *node, *nxt_node;

	if (!head)
		return;
	node = head;
	while (node)
	{
		nxt_node = node->next;
		free(node->str);
		free(node);
		node = nxt_node;
	}
}
