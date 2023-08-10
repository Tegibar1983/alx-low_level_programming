#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range -memory of array
 * @min: int parameter
 * @max: int type anther parameter
 * Return:  return pointer or Null
 */

int *array_range(int min, int max)
{
int *k;
int arr;

if (min > max)
{
return (NULL);
}

k = malloc(sizeof(int) * (max - min + 1));
if (k == NULL)
{
return (NULL);
}
arr = 0;
while (min <= max)
{
k[arr] = min;
min++;
arr++;
}
return (k);
}

