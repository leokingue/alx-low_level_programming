#include<stdio.h>
/**
 *main-printing alphabet in lowwercase
 *
 * Return:0 if success
 */
int main(void)
{
	char chara;

	for (chara = 'a'; chara <= 'z'; chara++)
	{
		putchar(chara);
	}
	putchar('\n');

	return (0);

}
