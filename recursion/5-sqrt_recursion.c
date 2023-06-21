#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _sqrt_recursion(int n)

{
    if (n < 0)
    
   {
	   return (-)1;
   }
    if (n == 0 || n == 1)
    
    {
	    return n;
    }
    return sqrt_helper(n, 1, n);
}

