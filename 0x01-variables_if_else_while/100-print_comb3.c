#include <stdio.h>
/**
 * main - Enty point function that prints out all the numbers between 00 and 99
 * with no two digits being the same
 * Return: always zero(0) on sucess
 */
int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = i; j < 58; j++)
		{
			if (i == j)
			{
				continue;
			}

			putchar(i);
			putchar(j);

			if (i == 56 && j == 57)
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
