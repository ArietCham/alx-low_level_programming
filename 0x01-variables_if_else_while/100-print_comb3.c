#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void trim(char *s);
int main(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 1; j <= 9; j++)
{
if (j > i)
{	
putchar(i + '0');
putchar(j + '0');
if (i != 8)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
{
void trim(char *s)
{
int i = strlen(s) - 1;
while (i > 0)
}
