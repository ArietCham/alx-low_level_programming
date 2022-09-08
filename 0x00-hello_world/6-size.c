#include <stdio.h>

/**
 * main - Print the string in the put function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
long int b;
long long c;
char d;
float f;

printf("size of a char: %lu 4 bytes\n", sizeof(d));
printf("size of an int: %lu 4 bytes\n", sizeof(a));
printf("size of a long int: %lu 4 bytes\n", sizeof(b));
printf("size of a long long int: %lu 8 bytes\n", sizeof(c));
printf("size of a float: %lu 4 bytes\n", sizeof(f));
return (0);
}	
