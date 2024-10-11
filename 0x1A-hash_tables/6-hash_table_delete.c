#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to delete
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int itr;
	hash_node_t *next;

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
	ht->size = 0;
	free(ht);
}
