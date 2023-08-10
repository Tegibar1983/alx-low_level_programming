#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - return pointer
 * @b: input argument
 * Return: pointeror NULL
 */
void *malloc_checked(unsigned int b)
{
void *m;

m = malloc(b);

if (m == NULL)
exit(98);
return (m);
}
