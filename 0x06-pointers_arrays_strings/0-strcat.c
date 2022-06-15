/**
 * _strcat: This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * @src: string to append to
 * @dest: main string
 * Return: pointer to concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	j = 0;
	while(src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
