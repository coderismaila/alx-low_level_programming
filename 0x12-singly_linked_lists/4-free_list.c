#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: head of linked list
 */

void free_list(list_t *head)
{
	list_t *cur;
	list_t *nxt;

	cur = head;
	while (cur != NULL)
	{
		nxt = cur->next;
		free(cur->str);
		free(cur);
		cur = nxt;
	}
}
