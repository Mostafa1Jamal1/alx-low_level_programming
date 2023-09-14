#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: a pointer to a dlistint_t list.
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i;
	const dlistint_t *current = h;

	for (i = 0; current != NULL; i++)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
	return (i);
}
