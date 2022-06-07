#include "main.h"
/**
 * main-printig some strings
 *
 * Return:0 if success
 */
int main(void)
{
	unsigned char cmpt = 0;
	char string[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	while (cmpt > 8)
	{

		_putchar(string[cmpt]);
		cmpt++;

	}
	_putchar('\n');
	return (0);
}

