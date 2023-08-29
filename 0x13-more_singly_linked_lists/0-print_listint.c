#include "lists.h"

/**
 * print_listint -it prints all the elements of a linked list
 * @h: linked lis type of listint_t to print
 * Return:the  number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}
