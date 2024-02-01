#include "hash_tables.h"

/**
 * hash_table_create - creates a hashtable
 *
 * @size: the size of the hash table
 * Return: hash_table created or NULL if something goes wrong;
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);
	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);

	if (!hash_table->array)
	{
		free(hash_table->array);
		return (NULL);
	}
	return (hash_table);
#include "hash_tables.h"

/**
 *  * hash_table_create - creates a hashtable
 *   *
 *    * @size: the size of the hash table
 *     * Return: hash_table created or NULL if something goes wrong;
 *      */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);
	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);

	if (!hash_table->array)
	{
			free(hash_table->array);
			return (NULL);
	}
	return (hash_table);
#include "hash_tables.h"

/**
 *  * hash_table_create - creates a hashtable
 *   *
 *    * @size: the size of the hash table
 *     * Return: hash_table created or NULL if something goes wrong;
 *      */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);
	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);

	if (!hash_table->array)
	{
			free(hash_table->array);
			return (NULL);
	}
	return (hash_table);
}}}
