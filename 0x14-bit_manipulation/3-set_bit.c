#include "main.h"

/**
 * set_bit - Sets bit value index to 1.
 * @n: pointer to bit.
 * @index: index value that start at 0.
 * Return: for error - -1.
 * Otherwise - 1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);

*n ^= (1 << index);

return (1);
}
