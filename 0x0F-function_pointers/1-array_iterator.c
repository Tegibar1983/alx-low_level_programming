#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 *  * array_iterator - prints each array
 *   * @array: array
 *    * @size: elements to print
 *     * @action: pointer to prnt
 *      * Return: void pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}

