<<<<<<< HEAD
#include <stdio.h>

void print_alphabet_x10(void)
{
	int i = 10;

	for (int i = 0; i < 9; i++)
	{
		char k = 'a';

		while ( r <= 'z')
		{
			if (k >= 'a' && i <= 'j')
			{
                _putchar(0);
            }

            i++;
        }
    }

    _putchar('\n');
=======
#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i, c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
			_putchar('\n');
	}
>>>>>>> 30111ab92e8f1827d0ebba4127d4a5723a4795c4
}
