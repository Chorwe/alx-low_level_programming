#include "main.h"

/**
 * _is_prime_helper - Helps check if a number is prime
 * @n: The number to check
 * @i: The current factor being checked
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int _is_prime_helper(int n, int i)
{
	if (n < 2)
		return (0);
	else if (i == n)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (_is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (_is_prime_helper(n, 2));
}
