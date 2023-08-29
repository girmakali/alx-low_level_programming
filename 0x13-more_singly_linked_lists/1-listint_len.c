#include "lists.h"

/**
 * listint_len - it returns number of elements in the linked lists
 * @h: linked list which is  listint_t to traverse
 * Return:total  number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
