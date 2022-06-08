#include <stdio.h>

#include <stdlib.h>

/**
* main - main block
* Description: computes and prints the sum of all the multiples of 3 or
* 5 below 1024 (excluded), followed by a new line
* Return: 0
*/

int main(void)
{
	int count = 0;
	int sum = 0;

	while (count < 1024)
	{
		if (count % 3 == 0 || count % 5 == 0)
		{
			sum += count;
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
