#ifndef _F_POINTERS_H_
#define _F_POINTERS_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>

/**
 * main - Program entry point.
 *
 * Return: Always 0.
 */
int main(void);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* _F_POINTERS_H_ */
