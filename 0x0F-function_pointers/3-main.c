#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - starting point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, otherwise exit(-1)
 */
int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int num_1, num_2;
		char *op;

		num_1 = atoi(argv[1]);
		num_2 = atoi(argv[3]);
		op = argv[2];
		if (((*op == '%' || *op == '/') && num_2 == 0) || op[1] != '\0')
		{
			printf("Error\n");
			exit(-1);
		}
		if (get_op_func(op) == NULL)
		{
			printf("Error\n");
			exit(-1);
		}
		printf("%d\n", get_op_func(op)(num_1, num_2));
		return (0);
	}
	printf("Error\n");
	exit(-1);
}
