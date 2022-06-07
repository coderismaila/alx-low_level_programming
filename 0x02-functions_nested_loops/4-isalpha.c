#include "main.h"

/**
* _isalpha - checks if a character is an alphabet.
* @c: character to check
* Return: returns 0 or 1.
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
