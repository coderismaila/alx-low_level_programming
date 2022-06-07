#include "main.h"

/**
* print_alphabet -  prints the alphabet, in lowercase, followed by a new line
* Return: Always void.
*/

void print_alphabet(void)
{
	int i, j;

	i = 0;
	while(i < 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar (j);
		}
		_putchar (10);
		i++;
	}
}
