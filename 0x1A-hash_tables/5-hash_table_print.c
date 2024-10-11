#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int itr;
	hash_node_t *temp;
	char flag_comma = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (itr = 0; itr < ht->size; itr++)
	{
		temp = ht->array[itr];
		while (temp != NULL)
		{
			if (flag_comma == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			flag_comma = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
