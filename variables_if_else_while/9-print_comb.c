#include <stdio.h>
/**
 * main - tprint all possible  combinations of single int and void
 * Return: always 0 (success)
 *
 */

int main(void)
{
	int l;

	for (l = 48; l <= 57; l++)
	{
		putchar (l);
		if (l <= 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	
	return (0);
}
