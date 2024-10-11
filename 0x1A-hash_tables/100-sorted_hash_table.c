#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: the size of the hash table
 *
 * Return: pointer to the new table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht;
	unsigned long int itr;

	sht = malloc(sizeof(shash_table_t));
	if (sht == NULL)
		return (NULL);
	sht->size = size;
	sht->shead = NULL;
	sht->stail = NULL;
	sht->array = malloc(size * sizeof(shash_node_t));
	if (sht->array == NULL)
	{
		free(sht);
		return (NULL);
	}
	for (itr = 0; itr < size; itr++)
	{
		sht->array[itr] = NULL;
	}
	return (sht);
}

/**
 * create_shash_node - makes a node for the sorted hash table
 * @key: the key for the data
 * @value: data to be stored
 *
 * Return: pointer to the new node, or NULL on failure
 */
shash_node_t *create_shash_node(const char *key, const char *value)
{
	shash_node_t *sh_node;

	sh_node = malloc(sizeof(shash_node_t));
	if (sh_node == NULL)
		return (NULL);
	sh_node->key = strdup(key);
	if (sh_node->key == NULL)
	{
		free(sh_node);
		return (NULL);
	}
	sh_node->value = strdup(value);
	if (sh_node->value == NULL)
	{
		free(sh_node->key);
		free(sh_node);
		return (NULL);
	}
	sh_node->next = sh_node->snext = sh_node->sprev = NULL;
	return (sh_node);
}

/**
 * add_to_sorted_hlist - add a node to the sorted (by key's ASCII) linked list
 * @table: the sorted hash table
 * @node: the node to add
 *
 * Return: void
 */
void add_to_sorted_hlist(shash_table_t *table, shash_node_t *node)
{
	shash_node_t *temp;

	if (table->shead == NULL && table->stail == NULL)
	{
		table->shead = table->stail = node;
		return;
	}
	temp = table->shead;
	while (temp != NULL)
	{
		if (strcmp(node->key, temp->key) < 0)
		{
			node->snext = temp;
			node->sprev = temp->sprev;
			temp->sprev = node;
			if (node->sprev != NULL)
				node->sprev->snext = node;
			else
				table->shead = node;
			return;
		}
		temp = temp->snext;
	}
	node->sprev = table->stail;
	table->stail->snext = node;
	table->stail = node;
}

/**
 * shash_table_set - sets a key to a value in the hash table
 * @ht: sorted hash table
 * @key: key to the data
 * @value: data to add
 *
 * Return: 1 on success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *new_value;
	shash_node_t *sh_node, *temp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(temp->value);
			temp->value = new_value;
			return (1);
		}
		temp = temp->next;
	}
	sh_node = create_shash_node(key, value);
	if (sh_node == NULL)
		return (0);
	sh_node->next = ht->array[index];
	ht->array[index] = sh_node;
	add_to_sorted_hlist(ht, sh_node);
	return (1);
}

/**
 * shash_table_get - retrieve a value from the hash table
 * @ht: the hash table
 * @key: the key to the data
 *
 * Return: value associated with key, or NULL on failure
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *temp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: the hash table to print
 *
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;
	char flag_comma = 0; /* 0 before printing any data, 1 after*/

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	temp = ht->shead;
	while (temp != NULL)
	{
		if (flag_comma == 1)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		flag_comma = 1;
		temp = temp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash_table in reverse
 * @ht: the hash table to print
 *
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;
	char flag_comma = 0; /* 0 before printing data, 1 after*/

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	temp = ht->stail;
	while (temp != NULL)
	{
		if (flag_comma == 1)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		flag_comma = 1;
		temp = temp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: the hash table to delete
 *
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int itr;
	shash_node_t *next;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (itr = 0; itr < ht->size; itr++)
	{
		while (ht->array[itr] != NULL)
		{
			next = ht->array[itr]->next;
			free(ht->array[itr]->key);
			free(ht->array[itr]->value);
			free(ht->array[itr]);
			ht->array[itr] = next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->shead = ht->stail = NULL;
	ht->size = 0;
	free(ht);
}
