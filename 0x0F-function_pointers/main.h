#ifndef _MAIN_H_
#define _MAIN_H_

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

#endif /* _MAIN_H_ */
