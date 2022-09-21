#include "main.h"

/**
 * _strcat - concatenates the string pointed to by @src to
 * the end of the string pointed to by @dest
 * @dest: String that will be appended
 * @src: String to be concatenated upon
 *
 * Return: returns pointer to @dest
 */

char *_strcat(char *dest, char *src)
{

int c, c2;
c = 0;
/*find the size of dest array*/
while (dest[c])
c++;
/* iterate through each src array value without the null byte*/
for (c2 = 0; src[c2]; c2++)
/*append src[c2] to dest[c] while overwritting the null byte in dest*/	
dest[c++] = src[c2];
return (dest);
}
