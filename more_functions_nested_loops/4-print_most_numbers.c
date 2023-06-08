#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_most_numbers - prints 0 to 9
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int k = 0;
	{
		while (k < 10)
		{
			if ((k != 2) && (k != 4))
				_putchar('0' + k);
			k += 1;
		}
	}
	_putchar('\n');
}
