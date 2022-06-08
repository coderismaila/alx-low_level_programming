#include <stdio.h>
#include "main.h"

/**
* print_to_98 - print numbers from n to 98
* @n: start number
* Return: returns void
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(",");
				printf(" ");
			}
		}
		n++;
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
		n--;
	}
	_putchar(10);
}
