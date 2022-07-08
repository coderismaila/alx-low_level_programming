#include "function_pointers.h"
#include<stddef.h>

/**
 * print_name - function that prints a name
 * @name: person's name
 * @f: pointer to a function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
