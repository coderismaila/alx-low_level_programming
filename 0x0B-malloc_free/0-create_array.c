#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars, and initializes it
 * with a specific char
 * @size: size of array to be allocated in memory
 * @c: characters to include in array
 * Return: NULL or a pointer the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(*ptr) * size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < size)
	{
		*(ptr + i) = c;
		i++;
	}
	return (ptr);
}
