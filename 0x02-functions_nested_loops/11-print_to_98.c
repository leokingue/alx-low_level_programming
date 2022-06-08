#include "main.h"
#include <stdlib.h>
/**
 *print_to_98-print nutural number within given range
 *
 *@n:parameter for the function
 *Return:void
 */
void print_to_98(int n)
{
	int i;
	int j;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				printf("%d,", i);
				printf(" ");
			}
			else
			{
				printf("%d", i);
			}
		}
		printf("\n");
	}

	if (n >= 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j != 98)
			{
				printf("%d,", j);
				printf(" ");
			}
			else
			{
				printf("%d", j);
			}
		}
		printf("\n");
	}
}
