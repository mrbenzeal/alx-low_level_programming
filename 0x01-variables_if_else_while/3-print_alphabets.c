#include <stdio.h>

/**
 * main - print the letters of the alphabe
 *
 * Description: print the letters of the aphabet in lower then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
