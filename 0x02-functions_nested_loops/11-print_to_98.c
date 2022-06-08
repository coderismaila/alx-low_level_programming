#include "main.h"

/**
* print_to_98 - print numbers from n to 98
* @n: start number
* Return: returns void
*/

void print_to_98(int n)
{
	while (n <= 98)
	{
		_putchar (n);
		_putchar (',');
		_putchar (' ');

		n++;
	}
}
