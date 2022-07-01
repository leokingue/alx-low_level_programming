#include "main.h"
#include <stdio.h>
/**
 * main - program
 * @argc: int value
 * @argv: string
 * Return: Value
 */
int main(int argc, char *argv[])
{
	int *tab;

	tab = malloc_checked(2);
	printf("La taille du tableau est :%ld\n", sizeof(tab));
	return (0);
}
