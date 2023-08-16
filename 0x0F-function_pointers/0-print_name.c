#include "function_pointers.h"

/**
 *print_name - print a function pointer
 *@name: charactor parameter
 * @f: the function pointer
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
	return;
f(name);
}
