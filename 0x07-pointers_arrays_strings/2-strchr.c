#include "main.h"

/**
 * _strchr - copies memory area.
 * @s: pointer to char
 * @c: char params to found
 * Return: pointer to S
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
