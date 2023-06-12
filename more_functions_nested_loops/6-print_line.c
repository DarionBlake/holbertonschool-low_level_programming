#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * more_numbers - prints 0 to 9
 *
 * Return: 0
 */

void int_line(int n)

	
	int i, n;

	if (n <= 0)
	{
		putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		putchar('_');
	}
	putchar('\n');
}
