#include <stdio.h>

/**
 * main -C programm eEntry point
 * Return: Always zero(0) on sucess
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
