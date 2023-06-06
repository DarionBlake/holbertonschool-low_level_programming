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

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (i <= size - j)
			{
				putchar(' ');
			}
			else
			{
				putchar(35);
			}
		}
		putchar('\n');
	}
}
