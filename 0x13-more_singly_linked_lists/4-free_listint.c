#include "lists.h"

/**
 * free_listint - it frees linked list
 * @head: listint_t list is going to  be free
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

