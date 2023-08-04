#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *  * main -Program Entry Point
 *   * atoi string to int converter function
 *   * @argc: arguments to be inputed
 *     * @argv: array pointer that points to arguments
 *      * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, res = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (a = 1; a < argc; a++)
		{
			res *= atoi(argv[a]);
		}
		printf("%d\n", res);
	}
	return (0);
}
