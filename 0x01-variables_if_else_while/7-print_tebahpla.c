#include <stdio.h>
/**
 * main-printing alphabet in lowwercase
 *
 * Return:0 if success
 */
int main(void)
{
	int chara;

	for (chara = 'z'; chara >= 'a'; chara--)
	{
		putchar(chara);
	}
	putchar('\n');

	return (0);
}
