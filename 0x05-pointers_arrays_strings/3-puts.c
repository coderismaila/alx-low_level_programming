#include "main.h"

/**
 * _puts - prints a string s, followed by a new line,
 * to stdout
 * @str: chatacters of string to be printed
 * Return: nothing
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
