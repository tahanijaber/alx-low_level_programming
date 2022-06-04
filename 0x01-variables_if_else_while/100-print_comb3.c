#include <stdio.h>
/**
 * main - Printing numbers between 01 to 89.
 *
 * Return : 0 
 */
int main(void)
{
	int i, e;

	i = 48;
	e = 48;

	while (e < 58)
	{
		if (e != i && e < i)
		{
			putchar(e);
			putchar(i);
			if (i == 57 && e == 56)
			{
				break;
			}
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
