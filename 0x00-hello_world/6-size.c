#include <stdio.h>
/**
 * main - Print the string in the put function
 *
 * Description: Using the main function
 * This program prints "Programming is like building a miltilingual puzzle"
 * Return: 0
 */
int main(void)
{
int a;
long int b;
long long c;
char d;
float f;

printf("size of a char: %lu 1 byte(s)\n", (unsigned long)sizeof(d));
printf("size of an int: %lu 4 byte(s)\n", (unsigned long)sizeof(a));
printf("size of a long int: %lu 4 byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long long int: %lu 8 byte(s)\n", (unsigned long)sizeof(c));
printf("size of a float: %lu 4 byte(s)\n", (unsigned long)sizeof(f));
return (0);
}	
