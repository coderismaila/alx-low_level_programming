#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: int - count of element in argv
 * @argv: array - list of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
