#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - a program that multiplies two numbers.
 * @argc: int parameter
 * @argv: string parameter
 * Return: value
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 3)
	{
		printf("Error");
		printf("\n");
		return (1);
	}
	sum = atoi(argv[1] * argv[2]);
	printf("%d", sum);
	printf("\n");
	return (0);
}
