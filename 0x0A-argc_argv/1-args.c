#include "main.h"
#include <stdio.h>
/**
 * main - a program that prints the number passed into it.
 * @argc: int parameter
 * @argv: string parameter
 * Return: value
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
