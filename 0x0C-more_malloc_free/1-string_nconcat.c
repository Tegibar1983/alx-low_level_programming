#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenate 2 strings
 * @s1: string 1
 * @s2: String 2
 * @n: Amount of s2 to s1
 *
 * Return: pointer to  memory, NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *nstr, *empt;
unsigned int a, len, b;
unsigned int size;

len = 0;
empt = "";
if (s1 == NULL)
s1 = empt;
if (s2 == NULL)
s2 = empt;
while (s1[len] != '\0')
len++;
size = (len + n) * sizeof(*nstr);
nstr = malloc(size + 1);
if (nstr == NULL)
return (NULL);
a = 0;
while (a < size && s1[a] != '\0')
{
nstr[a] = s1[a];
a++;
}
b = 0;
while (a < size && s2[b] != '\0')
{
nstr[a] = s2[b];
a++;
b++;
}
nstr[a] = '\0';
return (nstr);
}

