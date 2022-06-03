#include <stdio.h>

/**
 * main - Prints some letters of alphabet
 * Return: 0
 */
int main(void)
{
	char ch = 'b';
	while (ch <= 'm')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
