#include <stdio.h>

/**
 * main -C programm eEntry point
 * Return: Always zero(0) on sucess
 */
int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
