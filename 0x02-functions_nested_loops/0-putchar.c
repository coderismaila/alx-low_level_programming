#include "main.h"

/**
*main - print text to the screen
*Return: returns 0
*/

int main(void)
{
	char text[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);							}
	_putchar(10);
	return (0);
}
