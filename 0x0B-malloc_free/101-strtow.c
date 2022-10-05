#include "main.h"

/**
 * len - returns length od str
 * @str: string to be counted
 *
 * Return: length of the string
 */

int len (char *str)
{
int len = 0;

if (str != NULL)
{
while (str[len])
len++;
}
return (len);
}
