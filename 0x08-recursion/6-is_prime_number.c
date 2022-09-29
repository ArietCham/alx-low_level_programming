#include "main.h"

/**
 * helperFunction - returns 0 0r 1
 * @num: number to be checked
 * @i: possible factor of the number
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int helperFunction(int num, int i)
{
if (i < num)
{
if (num % i == 0)
{	
return (0);
}
else
{
return helperFunction(num, i + 1));
}
}
else
{
return (1);
}
}

/**
 * is_prime_number - checks if num is prime or not
 * @n: number to be checked
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime(int n)
{
if (n <= 1)
{
return (0);
}
else
{
return (helperFunction(n, 2));
}
}
