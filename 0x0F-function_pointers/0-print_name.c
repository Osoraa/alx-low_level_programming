#include "function_pointers.h"

/**
 * print_name - A function that prints it's name.
 *
 * @name: Name of the function.
 * @f: Pointer to the function.
 *
 * Return: None.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
