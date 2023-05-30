#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
	int n = 0;

	srand(time(0));
	n = rand(0) - RAND_MAX / 2;
	return (0);
}
