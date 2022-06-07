#include <stdio.h>
/**
 * main-printing alphabet in lowwercase
 *
 * Return:0 if success
 */
int main(void)
{
	int num;

	for (num = 0; num < 16; num++)
	{
		if (num >= 10)
		{
			for (num = 'a'; num <= 'f'; num++)
			{
				putchar(num);
			}
			continue;
		}
		putchar((num % 10) + '0');
	}
	putchar('\n');
	return (0);
}
