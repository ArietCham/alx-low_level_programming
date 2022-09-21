#include "main.h"
#include <stdio.h>
#include <string.h>

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

        int len = 0, i;
/*find the size of dest array*/
        while (dest[len])
            len++;
/* iterate through each src array value without the null byte*/
        for (i = 0; src[i] != '\0'; i++)
{
/*append src[c2] to dest[c] while overwritting the null byte in dest*/	
             dest[len] = src[i];
             len += 1;
}
        dest[len] = '\0';
        return (dest);
}
