#include "list.h"
#include <stdio.h>

/**
 * list_len - function that returns the number of element in a linked list.
 * @h: linked list
 * Return: integer number of element
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *cur = h;

	while (cur != NULL)
	{
		cur = cur->next;
		count++;
	}
	return (count);
}
