#include <stdio.h>
/**
 * main-printing alphabet in lowwercase and skip q, e
 *
 * Return:0 if success
 */
int main(void)
{
	char chara;

	for (chara = 'a'; chara <= 'z'; chara++)
	{
		if (chara == 'e' || chara == 'q')
		{
			continue;
		}
		putchar(chara);
	}
	putchar('\n');
	return (0);

}
