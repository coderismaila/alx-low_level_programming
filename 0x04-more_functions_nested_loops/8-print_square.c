#include "holberton.h"

/**
* print_square - prints a square of dimension size x size
* @size : number of _ to be printed
* Return:void
*/

void print_square(int size)
{
	int i = 0, j;

	while (i < size && size > 0)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
