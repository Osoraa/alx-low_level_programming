#include "main.h"

/**
 * print_name - A function that prints it's name.
 *
 * @name: Name of the function.
 * @f: pointer to the function.
 *
 * Return: None.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
