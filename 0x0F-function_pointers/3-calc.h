#ifndef _CALC_H_
#define _CALC_H_

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
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#endif /* _CALC_H_ */
