#include <stdio.h>

/**
 * print_triangle - prints 0 to 9
 *
 * @size: perimiter
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	
	int j;

	if (size <= 0)
	{
		putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		if (j = 0; j <= i; j++)
		{
			putchar(35);
		}
		putchar('\n');
	}
}
