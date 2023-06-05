#include "main.h"

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{	
	return (1);
	}
	else
	{
    return (0);
	}
}

int main(void)
{
	int c;

	/* Get the character from the user*/
	// printf("Enter a character: ");
	// scanf("%c", &c);

	if (_isupper(c))
	{
	printf("The character is uppercase.\n");
	}
	else
	{
		printf("The character is not uppercase.\n");
	}
	return (0);
}
