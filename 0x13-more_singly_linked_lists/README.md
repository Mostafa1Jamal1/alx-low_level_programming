This is for the description of each file in this directory `0x13-more_singly_linked_lists`.
any file that is not mentioned here is for testing purposes.

Let us start:

`0-print_listint.c` > is a source code file for a function that prints all the elements of a listint_t list.
- Prototype: `size_t print_listint(const listint_t *h);`
- Return: the number of nodes

`1-listint_len.c` > is a source code file for a function that returns the number of elements in a linked listint_t list.
- Prototype: `size_t listint_len(const listint_t *h);`

`2-add_nodeint.c` > is a source code file for a function that adds a new node at the beginning of a listint_t list.
- Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`
- Return: the address of the new element, or `NULL` if it failed
