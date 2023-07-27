#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to the head of the list
 * @str: the string of the new element
 * Return: the address of the new element,
 * or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ret;
	list_t *temp = *head;
	unsigned int len = 0;
	/* Get the length of str */
	while (*(str + len))
		len++;
	/* Allocate memory for the new element and check fail */
	ret = malloc(sizeof(list_t));
	if (ret == NULL)
		return (NULL);
	/* Dublicate str to ret->str and check fail */
	ret->str = strdup(str);
	if (ret->str == NULL)
	{
		free(ret);
		return (NULL);
	} /* Assign the computed length to len of the new element (ret) */
	ret->len = len;
	/* Assign NULL to the next */
	ret->next = NULL;
	/* Check if head is NULL */
	if (*head == NULL)
		*head = ret;
	else /* Go to the end of the list and add the new element */
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = ret;
	}
	return (ret);
}
