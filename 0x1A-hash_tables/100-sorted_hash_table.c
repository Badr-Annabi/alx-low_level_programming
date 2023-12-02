#include "hash_tables.h"

/**
 * t - test
 */
void t(void);

/**
 * shash_table_create - creates a hash table.
 * @size:  size of the array
 * Return: pointer to the newly created hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;

	shash_table_t *table = (shash_table_t *)malloc(sizeof(shash_table_t));

	if (!table)
		return (NULL);
	table->shead = NULL;
	table->stail = NULL;
	table->size = size;
	table->array = (shash_node_t **)calloc(
			table->size, sizeof(shash_node_t **));
	if (!table->array)
		return (NULL);
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}

/**
 * hash_table_sort - Adds a new node to a sorted list
 * in a hash table.
 * @ht: the hash table
 * @node: the new node
 */
void hash_table_sort(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *tmp;

	tmp = ht->shead;
	while (tmp && strcmp(tmp->key, node->key) < 0)
		tmp = tmp->snext;


	if (!ht->shead && !ht->stail)
	{
		node->snext = NULL;
		node->sprev = NULL;
		ht->shead = node;
		ht->stail = node;
	}
	else
	{
		if (tmp == NULL)
		{
			tmp = ht->stail;
			node->snext = NULL;
			tmp->snext = node;
			node->sprev = tmp;
			ht->stail = node;
		}
		else if (tmp == ht->shead)
		{
			node->snext = tmp;
			node->sprev = NULL;
			tmp->sprev = node;
			ht->shead = node;
		}
		else
		{
			node->snext = tmp;
			node->sprev = tmp->sprev;
			tmp->sprev->snext = node;
			tmp->sprev = node;
		}
	}
}

/**
 * shash_table_set - adds an element to the hash table.
 * @ht:  the hash table you want to add or update the key/value.
 * @key: the key. key can not be an empty string.
 * @value: the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *tmp, *shead;
	unsigned long int index;

	if (!ht || !key || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[index];
	if (tmp == NULL)
	{
		shead = malloc(sizeof(shash_node_t));
		if (shead == NULL)
			return (0);
		shead->value = strdup(value);
		if (shead->value == NULL)
			return (0);
		shead->key = strdup(key);
		shead->snext = NULL;
		shead->sprev = NULL;
		ht->array[index] = shead;
	}

	else
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
            return (1);
		}
		else
		{
			shead = malloc(sizeof(shash_node_t));
			if (!shead)
				return (0);
			shead->key = strdup(key);
			shead->value = strdup(value);
			shead->snext = tmp;
            shead->sprev = NULL;
            tmp->sprev = shead;
			ht->array[index] = shead;
		}
	}
	hash_table_sort(ht, shead);
	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key.
 * @ht:  the hash table you want to look into.
 * @key: the key you are looking for.
 * Return:  the value associated with the element,
 * or NULL if key couldn’t be found.
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *tmp;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->snext;
	}
	return (NULL);
}

/**
 * shash_table_print -  prints a hash table.
 * @ht: the hash table.
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
	unsigned long int flag = 0;

    tmp = ht->shead;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	while (tmp != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		flag = 1;
		tmp = tmp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev -  prints a hash table in reverse.
 * @ht: the hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp = ht->stail;
	unsigned long int flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	while (tmp)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		flag = 1;
		tmp = tmp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table.
 * @ht: the hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int index;
	shash_node_t *tmp;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (index = 0; index < ht->size; index++)
	{
		while (ht->array[index] != NULL)
		{
			tmp = ht->array[index]->snext;
			free(ht->array[index]->key);
			free(ht->array[index]->value);
			free(ht->array[index]);
			ht->array[index] = tmp;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}

/**
 * t - test
 */
void t(void)
{
}
