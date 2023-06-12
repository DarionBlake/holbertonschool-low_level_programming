#include "main.h"
#include <stdio.h>
/**
  * rev_string - Prints reverse string in place
  * @s: The string to print
  * Return: result
  */
char *strcat(char *dest, char *src)
{
	int sc = 0;
while dest[sc] != '\0'
{
	sc++;
}
while (*src != '\0')
{
	*dest = *src;
	dest++;
	src++;
}

	*dest = ('\0)';
	return (dest);
}
