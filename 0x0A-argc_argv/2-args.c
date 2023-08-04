#include <stdio.h>
#include "main.h"
/**
 *  * main -Program Entry Point
 *   * @argc: arguments to be inputed
 *    * @argv: array pintee too arguments
 *     * Return: 0
*/
int main(int argc, char *argv[])
{
	int a = 0;

	while (a < argc)
	{
		printf("%s\n", argv[a]);
		a++;
	}
	return (0);
}
