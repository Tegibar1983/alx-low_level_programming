#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program entry point
 * Return: Alwas zero (0) on suecess
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
