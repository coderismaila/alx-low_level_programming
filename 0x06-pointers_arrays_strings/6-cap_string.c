#include "main.h"

/**
 * char_exists - checks if char exist in an array
 * @arr: array of characters
 * @c: character to check for
 * @n: number of element in array
 * Return: 1 if character exists or 0 if it does not
 */

int char_exists(char *arr, char c, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (arr[i] == c)
			return (1);
	}
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 * Return: return pointer to capitalized string
 */

char *cap_string(char *str)
{
	int i;
	char arr[13] = {
		' ', '\n', '\t', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'
	};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		if (char_exists(arr, str[i], 13) && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			str[i + 1] -= 32;
	}
	return (str);
}
