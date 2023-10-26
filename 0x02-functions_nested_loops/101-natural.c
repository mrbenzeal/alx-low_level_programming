#include <stdio.h>

/**
 * main - program that sums multplies of 3 or 5 between 0 and 1024
 * followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	int sum = 0;
	int i;

	for (i = 0 ; i < 1024 ; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
}
