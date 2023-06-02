#include <stdio.h>

int main(void)
{
for (int i = 0; i <= 9; i++)
	{
	for (int j = i + 1; j <= 9; j++)
	{
		for (int k = j + 1; k <= 9; k++)
		{
			for (int l = k + 1; l <= 9; l++)
			{
				putchar(i + '0');
				putchar(',');
				putchar(' ');
				putchar(j + '0');
				putchar(',');
				putchar(' ');
				putchar(k + '0');
				putchar(',');
				putchar(' ');
				putchar(l + '0');
				putchar('\n');
			}
		}
	}
	}
	return (0);

