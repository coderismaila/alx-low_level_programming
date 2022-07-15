#include "lists.h"
#include <string.h>

/**
 * add_node - function that adds a node at the beginning of a linked list.
 * @head: linked list head
 * @str: string element of linked list
 * Return: address of new node or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int len_str;

	new_node = (list_t *) malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (len_str = ; str[len_str] != '\0'; len_str++)
		;
	new_node->len = len_str;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
