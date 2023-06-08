<<<<<<< HEAD
#include <stdio.h>

void print_alphabet(void)
{
	char letter = 'a';

    while (letter <= 'z')
    {
	    _putchar(letter);
	    letter++;
    }

    _putchar('\n');
=======
#include "main.h"

/**
 * print_alphabet - Make the alphabet
 * Return: void
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)

		_putchar(c);
	_putchar('\n');
>>>>>>> 30111ab92e8f1827d0ebba4127d4a5723a4795c4
}
