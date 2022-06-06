#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
 *main-printing alphabet in lowwercase
 *
 * Return:0 if success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, (n % 10));
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, (n % 10));
	}
	else
	{
		printf("Last digit of %d is %d and is 0", n, (n % 10));
	}
	printf("\n");
	return (0);

}
