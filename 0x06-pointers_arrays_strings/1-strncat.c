#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: destinnation string to append to
 * @src: source string
 * @n: number of byte to apoend from src
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int i;

	/*find length of dest*/
	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		;
	/*append n bytes from src to dest*/
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
