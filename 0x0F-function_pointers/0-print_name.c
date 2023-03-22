#include "function_pointers.h"

/**
 * print_name - function that print name with other function
 * @name: the name to use
 * @f: is the function that will print
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
