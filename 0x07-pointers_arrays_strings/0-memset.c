#include "main.h"

/**
 * _memset - Fill memory with a constant byte
 * @s: memory area to fill
 * @b: Constant byte to fill
 * @n: The number of bytes to fill
 *
 * Return: the memory area filled
 */
char *_memset(char *s, char b, unsigned int n);
{
unsigned int a;

for (a = 0; a < n; a++)
{
s[a] = b;
}

return (s);
}
