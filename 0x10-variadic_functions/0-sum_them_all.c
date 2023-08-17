#include <stdarg.h>
#include "variadic_functions.h"


/**
* sum_them_all - variadic Function to sum parametres
* @n: # parametres
* @...: # variable lists
* Return: for n == 0 - 0.
* Otherwise - addition of sums.
*/

int sum_them_all(const unsigned int n, ...)
{
va_list xy;
unsigned int i, sum = 0;
va_start(xy, n);
for (i = 0; i < n; i++)
sum += va_arg(xy, int);
va_end(xy);
return (sum);
}

