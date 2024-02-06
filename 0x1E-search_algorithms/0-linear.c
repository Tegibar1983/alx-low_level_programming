#include search_algos.h

/**
 * search for a value that from the array of integers usin LSA
 * @array : input array
 * @size : size of the array
 * @value : value to search in
 * return: always EXIT  SUCESESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
	{
		return (-1);
	}
	for (x = 0; x < size; x++)
	{
		printf("value checked array [%li] = [%i\n]", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
	}
	return (-1);
}
