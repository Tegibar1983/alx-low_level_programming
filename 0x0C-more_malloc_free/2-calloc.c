#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_calloc - function that  allocate contigous memory
 * @nmemb: unsigned int type parameter
 * @size: memory size of parametr
 * Return: pointer or NULL if fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *k;
unsigned int count;

if (nmemb == 0 || size == 0)
return (NULL);
k = malloc(nmemb * size);
if (k == NULL)
{
return (NULL);
}
count = 0;
while (count < nmemb * size)
{
k[count] = 0;
count++;
}
return (k);
}

