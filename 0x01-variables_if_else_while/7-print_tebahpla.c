#include <stdio.h>

/**
 * main - C program entrry point
 * Return: Alwasy zero(0) on sucess
 */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
