#include "lists.h"
/**
 * add_node -  adds a new node at the beginning of a list_t list.
 * @head: pointer to the head of the list
 * @str: the string of the new element
 * Return: the address of the new element,
 * or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *ret;
	unsigned int len = 0;

	while (*(str + len))
		len++;
	ret = malloc(sizeof(list_t));
	if (ret == NULL)
		return (NULL);
	ret->str = strdup(str);
	if (ret->str == NULL)
	{
		free(ret);
		return (NULL);
	}
	ret->len = len;
	ret->next = *head;
	*head = ret;
	return (ret);
}
