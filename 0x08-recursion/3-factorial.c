#include "main.h"

/**
 * factorial - function that returns the factorial of a given number n.
 * @n: integer number to determing its factorial
 * Return: int
 */

int factorial(int n)
{
	if (n > 1)
		return (n * factorial(n - 1));
	return 1;
}
