#include "main.h"

/**
 * clear_bit - Sets bit value index to 0.
 * @n: pointer to the bit.
 * @index: index value that start at 0.
 * Return: If an error occurs - -1.
 * Otherwise - 1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);

*n &= ~(1 << index);

return (1);
}
