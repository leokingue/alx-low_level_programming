#include <stdio.h>
/**
 *main-printing alphabet in lowwercase and in uppercase
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

	for (chara = 'A'; chara <= 'Z'; chara++)
	{
		putchar(chara);
	}
	putchar('\n');

	return (0);
}
