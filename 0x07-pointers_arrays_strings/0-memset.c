#include "main.h"
/**
 * _memset - fills a memory block with a constant byte
 * @s: source string
 * @b: char to be used
 * @n: number of bytes to be used
 * Return: new string.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
*(s + i) = b;
i++;
}
return (s);
}	
