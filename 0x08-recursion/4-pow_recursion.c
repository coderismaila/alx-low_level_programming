#include "main.h"

/**
 * _pow_recursion - function that return the value of x raise to the power of y
 * @x: integer base number
 * @y: integer power
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
