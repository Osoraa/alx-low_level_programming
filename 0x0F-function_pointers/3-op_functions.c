#include "3-calc.h"

/**
 * op_add - Sums two numbers.
 *
 * @a: Value to add.
 * @b: Value to add.
 *
 * Return: Sum of values.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Performs sminux operation on two numbers.
 *
 * @a: Value to minus.
 * @b: Value to minus.
 *
 * Return: Result of subtraction of values.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two numbers.
 *
 * @a: Value to multiply.
 * @b: Value to multiply.
 *
 * Return: Product of values.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides a number by another.
 *
 * @a: Dividend.
 * @b: Divisor.
 *
 * Return: Quotient.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Finds the remainder of a division of two numbers.
 *
 * @a: Dividend.
 * @b: Divisor.
 *
 * Return: Remainder.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
