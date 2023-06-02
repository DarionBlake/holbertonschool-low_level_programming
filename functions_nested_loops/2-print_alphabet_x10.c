void print_alphabet_x10(void)

/**
 * main - tprint all possible  combinations of single int and void
 * Return: always 0 (success)
 *
 */

{
	for (int i = 0; i < 10; i++)
	{
		for (char c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
