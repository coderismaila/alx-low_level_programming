#include "main.h"

/**
 * print_rev - prints a string s, in reverse,
 * followed by a new line.
 * @s: chatacters of string to be printed in reverse
 * Return: nothing
 */

void print_rev(char *s)
{
	int i;
	int len = _strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
