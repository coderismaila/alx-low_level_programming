#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: count of arguments in argv
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	unsigned short int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
