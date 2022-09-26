#include "main.h"
/**
 * _memcpy -  fills with another buffer.
 * @dest: source string
 * @src: string to filling
 * @n: length of buffer
 * Return: new string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*dest(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
