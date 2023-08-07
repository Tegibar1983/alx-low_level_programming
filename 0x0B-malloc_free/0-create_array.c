#include "main.h"
#include <stdlib.h>

/*
 * create_array : crate an array of chars
 * return pointer or NULL if fails
 */

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

if (size == 0)
return (NULL);

array = (char *)malloc(sizeof(char) * size);
if (array == 0)
return (NULL);
for (i = 0; i < size; i++)
array[i] = c;
return (array);
}
