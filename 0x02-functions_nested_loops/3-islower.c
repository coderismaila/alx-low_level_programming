#include "main.h"

/**
* _islower - checks if a character is lower or upper
* @c: character to check
* Return: returns 0 or 1.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
