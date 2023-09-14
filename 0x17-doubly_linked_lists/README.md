This is for the description of each file in this directory `0x17-doubly_linked_lists`.
any file that is not mentioned here is for testing purposes.

Let us start:


`0-print_dlistint.c` -> a function that prints all the elements of a dlistint_t list.
- Prototype: size_t print_dlistint(const dlistint_t *h);
- Return: the number of nodes
- Format: see example


`1-dlistint_len.c` -> a function that returns the number of elements in a linked dlistint_t list.
- Prototype: size_t dlistint_len(const dlistint_t *h);


`2-add_dnodeint.c` -> a function that adds a new node at the beginning of a dlistint_t list.
- Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);
- Return: the address of the new element, or NULL if it failed


`3-add_dnodeint_end.c` -> a function that adds a new node at the end of a dlistint_t list.
- Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
- Return: the address of the new element, or NULL if it failed


