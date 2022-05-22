#include "3-calc.h"

/**
 * main - Program entry point.
 *
 * @argc: Argument count.
 * @argv: String array of arguments.
 *
 * Return: 0 on success, else non-zero.
 */
int main(int argc, char *argv[])
{
	int num1, num2, (*r)(int, int);
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	
	printf("lmao");
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op = argv[2];
	printf("lmao");
	r = get_op_func(op);
	
	/* if (r == NULL)
	{
		printf("Error\n");
		exit(99);
	} */

	if (num2 == '0' && (strcmp(op, "/") == 0 || strcmp(op, "%")))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", r(num1, num2));

	return (0);
}
