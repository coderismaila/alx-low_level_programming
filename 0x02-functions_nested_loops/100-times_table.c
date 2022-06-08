#include "main.h"

/**
* print_times_table - prints n times table starting from 0
* @n : number of times table
* Return: returns void
*/

void print_times_table(int n)
{
	int start = 0, rep, b;

	if (n < 0 || n > 15)
		return;

	while (start <= n)
	{
		for (b = 0; b <= n; b++)
		{
			rep = start * b;
			if (b == 0)
				_putchar('0' + rep);
			else if (rep < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + rep);
			}
			else if (rep < 100)
			{
				_putchar(' ');
				_putchar('0' + rep / 10);
				_putchar('0' + rep % 10);
			}
			else
			{
				_putchar('0' + rep / 100);
				_putchar('0' + (rep - 100) / 10);
				_putchar('0' + rep % 10);
			}
			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		start++;
	}
}
