#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to const list_t
 * Return: the number of nodes
 * If str is NULL, print [0] (nil)
*/
size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *ptr = h;

	while (ptr->next != NULL)
	{
		if (ptr->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		i++;
		ptr = ptr->next;
	}
	if (ptr->str == NULL)
		printf("[%d] (nil)\n", 0);
	else
		printf("[%d] %s\n", ptr->len, ptr->str);
	i++;
	return (i);
}
