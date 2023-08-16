#include "function_pointers.h"

/**
 *  * int_index - Functionr
 *   * @array: int arr
 *    * @size: arr size
 *     * @cmp: function pointer of function
 *      * Return:first element -1 if none
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
