#include "main.h"

/**
 * _evaluate - evaluate function sqrt
 * @n: integer
 * @x: integer
 * Return: evaluate sqrt
 */
int _evaluate(int n, int x)
{
if (n == 1 || n == 0)
return (0);

else if (n * n < x)
return (_evaluate(i + 1, n));

else if (n * n == x)
return (n);

return (-1);

return (-1);
}
