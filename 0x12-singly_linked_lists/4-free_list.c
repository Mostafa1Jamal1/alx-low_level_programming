#include "lists.h"
/**
 * free_list - frees a list_t list.
 * @head: pointer to list
*/
void free_list(list_t *head)
{
	list_t *nxt;

	while (head != NULL)
	{
		free(head->str);
		nxt = head->next;
		free(head);
		head = nxt;
	}
}
