/**
 * is_divisible - function that check if n is divisible by 2.
 * @a: integer
 * @div: integer
 * Return: 0 if divisible by 2 otherwise 1.
 */

int is_divisible(int a, int div)
{
	if (div == 1)
		return (1);

	if (a % div == 0)
		return (0);

	return (is_divisible(a, div - 1));
}

/**
 * is_prime_number - return 1 if input is prime number else return 0.
 * @n: integer
 * Return: 1 if prime else 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_divisible(n, n - 1));
}
