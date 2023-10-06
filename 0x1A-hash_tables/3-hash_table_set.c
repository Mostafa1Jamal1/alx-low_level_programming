#include "hash_tables.h"

/**
 * create_node - create a hash table node
 * @key: the key of the node
 * @value: the corresponding value to the key
 * Return: pointer to the node
 * or NULL in error
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}

/**
 * add_node - adds a new node at the beginning of a hash_node_t list
 * @head: pointer to the head of the list
 * @key: is the key of new node.
 * @value: is the value associated with the key.
 * Return: the address of the new element,
 * or NULL if it failed
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new = create_node(key, value);

	if (new == NULL)
		return (NULL);
	new->next = *head;
	*head = new;
	return (new);
}

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key.
 * @value: is the value associated with the key. value must be duplicated.
 * value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current;
	size_t val_len;

	/* key can not be an empty string */
	if (key == NULL || value == NULL || ht == NULL)
		return (0);
	if (strlen(key) == 0)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	val_len = (strlen(value) + 1);
	/* Create a new node */
	new_node = create_node(key, value);
	if (new_node == NULL)
		return (0);
	/* adding new node if no collosion */
	if (current == NULL)
	{
		ht->array[index] = new_node;
		return (1);
	}
	else
	{	/* Case if the key exists update the value */
		if (strcmp(current->key, key) == 0)
		{ /* If the value is the same -> do nothing */
			if (strcmp(current->value, value) == 0)
				return (1);
			ht->array[index]->value = (char *)realloc(current->value, val_len);
			if ((strcmp(current->value, value) == 0) || current->value == NULL)
				return (0);
			strcpy(ht->array[index]->value, value);
			return (1);
		} /* Collosion */
		else
		{ /* add the new node at the beginning of the list */
			add_node(&ht->array[index], key, value);
		}
	}
	return (1);
}
