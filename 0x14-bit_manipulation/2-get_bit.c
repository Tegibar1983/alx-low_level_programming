#include "main.h"

/**
 * get_bit - Gets bit value.
 * @n: bit.
 * @index: get index value that start at 0.
 * Return: for error - -1.
 * Otherwise - bit value.
 */

int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);

if ((n & (1 << index)) == 0)
return (0);

return (1);
}

