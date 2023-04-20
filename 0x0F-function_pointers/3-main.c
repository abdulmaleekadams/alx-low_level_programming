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
		int (*op)(int, int);

		num_1 = atoi(argv[1]);
		num_2 = atoi(argv[3]);
		op = get_op_func(argv[2]);
		if ((*argv[2] == '%' || *argv[2] == '/') && num_2 == 0)
		{
			printf("Error\n");
			exit(-1);
		}
		printf("%d\n", op(num_1, num_2));
		return (0);
	}
	printf("Error\n");
	exit(-1);
}
