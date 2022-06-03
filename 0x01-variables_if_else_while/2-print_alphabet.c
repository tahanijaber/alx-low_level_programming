#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the alphabetic
 * Return: 0
 */
int main(void)
{
	char c;
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
