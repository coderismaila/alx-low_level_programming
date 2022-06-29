#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: string to duplicate
 * Return: NULL or pointer
 */

char *_strdup(char *str)
{
	int i, len;
	char *new_str;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	new_str = malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[len + 1] = '\0';
	return (new_str);
}
