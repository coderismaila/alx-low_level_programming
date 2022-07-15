#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: pointer to list to be printed
 * Return: integer number of nodes in list
 */

size_t print_list(const list_t *h)
{
	size_t node = 0;
	const list_t *cur = h;

	while (cur != NULL)
	{
		printf("[%d] %s\n", cur->len, cur->str != NULL ? cur->str : "(nil)");
		cur = cur->next;
		node++;
	}
	return (node);
}
