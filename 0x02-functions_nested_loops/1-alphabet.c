#include "main.h"

/**
* print_alphabet -  prints the alphabet, in lowercase, followed by a new line
* Return: Always void.
*/

void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar (letter);
	}
	_putchar(10);
}
