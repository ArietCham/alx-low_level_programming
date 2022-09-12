#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * codes for printing all possible combination of two d/t digits
 * in assending order and separated by a comma followed by a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n1 = 0, n2;
while (n1 <= 9)
{
n2 = 0;
while(n2 <= 9)
{
if (n1 != n2 && n1 < n2)
{
putchar(n1 + 48);
putchar(n2 + 48);
if (n1 + n2 != 17)
{
putchar(',');
putchar(' ');
}
}
++n2;
}
++n1;
putchar('\n');
return (0);
}
