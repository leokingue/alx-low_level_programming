#include "main.h"
int checkingPrime(int num, int i);
/**
 * checkingPrime - checking if number is prime
 * @num:number as argument
 * @i:argument which will help us to increment
 * Return:value
 */
int checkingPrime(int num, int i)
{
	if (num <= 1)
		return (0);
	else if (i < num)
	{
		if (num % i != 0)
			return (checkingPrime(num, i + 1));
		else
			return (0);
	}
	else
		return (1);
}
/**
 * is_prime_number-passing the function arleady check if nbr is prime
 * @n:number to be passed in function
 * Return:valuee
 */
int is_prime_number(int n)
{
	return (checkingPrime(n, 2));
}
