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
	int i = 0, len = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		len++;
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		s[i] = str[i];
	}
	s[len] = '\0';
	return (s);
}
