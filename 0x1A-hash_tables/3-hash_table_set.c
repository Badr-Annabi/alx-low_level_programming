#include "hash_tables.h"

/**
 * t - test
 */
void t(void);


/**
 * hash_table_set - adds an element to the hash table.
 * @ht:  the hash table you want to add or update the key/value.
 * @key: the key. key can not be an empty string.
 * @value: the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *head;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
		return (0);

	head = ht->array[index];
		while (head)
		{
			if (strcmp(head->key, key) == 0)
			{
				free(head->value);
				head->value = strdup(value);
                if (head->value == NULL)
                    return (0);
				return (1);
			}
			head = head->next;
		}

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
/**
 * t - test
 */
void t(void)
{
}
