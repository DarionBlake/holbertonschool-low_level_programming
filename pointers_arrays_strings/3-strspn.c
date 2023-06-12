#include <stdio.h>

unsigned int _strspn(char *s, char *accept)
{
    char *s = "Hello, World!";
    char *accept = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    unsigned int length = _strspn(s, accept);
    printf("Length of prefix substring: %u\n", length);
    return (0);
}
