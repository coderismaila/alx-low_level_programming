#include <stdio.h>

/**
* main -  prints the numbers from 1 to 100, followed by a new line.
* But for multiples of 3 print Fizz instead of the number and for the
* multipes of 5 print Buzz.
* For numbers which are multiples of both three and five print FizzBuzz
* Return: void.
*/

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}
		if (i != 100)
		{
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
