#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 * Return: pointer to string
 */

char *leet(char *str)
{
	int i;
	int j;
	int k;

	char value[] = "oOlLeEaAtT";
	char code[] = "0011334477";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		k = 0;
		while (value[j] != '\0')
		{
			if (str[i] == value[j])
			{
				k = j;
				str[i] = code[k];
			}
			j++;
		}
		i++;
	}
	return (str);
}
