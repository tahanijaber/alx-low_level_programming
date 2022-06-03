#include <stdio.h>

/**
 * main - Prints the alphabetic in lower and upper case
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'b'; ch <= 'm'; ch++)
		putchar(ch);
	for (ch = 'B'; ch <= 'M'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
