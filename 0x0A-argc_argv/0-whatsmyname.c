#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line.
 * @argc: int - count of arguments in argv
 * @argv: array - list of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
