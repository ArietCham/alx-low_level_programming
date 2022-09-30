#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: length of argv
 * @argv: number of argument
 * return: Alaways 0 (success)
 */

int main(int argc, char *argv[])
{
/*Declaring variables*/
int c, coins = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}

c = atoi(argv[1]); /*convert str to int*/
if (c < 0)
{
printf("0\n");
return (0);
}

/*Declaring while*/

for (; c >= 0;)
{
if (c >= 25)
c -= 25;

else if (c >= 10)
c -= 10;

else if (c >= 5)
c -= 5;

else if (c >= 2)
c -= 2;

else if (c >= 1)
c -= 1;
else
break;
coins += 1;
}
printf("%d\n", coins);
return (0);
}
