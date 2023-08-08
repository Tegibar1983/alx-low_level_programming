#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - function to concatenates program arguments
 * @ac: # args
 * @av: array pointer to args
 * Return: Null pointer array for failor or pointer to array
 */
char *argstostr(int ac, char **av)
{
char *str;
int len = 0, a = 0,  b, c = 0;

if (av == 0 || ac == 0)
return (0);
while (a < ac)
{
b = 0;
while (av[a][b] != 0)
len++, b++;
len++, a++;
}
len++;
str = (char *)malloc(sizeof(char) * len);
if (str == 0)
{
free(str);
return (0);
}
i = 0;
while (a < ac)
{
j = 0;
while (av[a][b] != 0)
str[c] = av[a][b], b++, c++;
str[c] = '\n', c++, a++;
}
str[c] = 0;
return (str);
}
