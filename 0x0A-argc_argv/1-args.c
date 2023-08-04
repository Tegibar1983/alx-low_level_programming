#include <stdio.h>
#include "main.h"
/**
 *  * main -Program Entry Point
 *   * @argc: arguments to be inputed
 *    * @argv: array that points to arguments
 *     * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	}
	printf("%d\n", i - 1);
	return (0);
}
