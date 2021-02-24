/**
 * isPrime - check if number is prime
 *
 * @n: number to check
 * @i: next comparable number
 *
 * Return: true if n is prime
 */
int isPrime(int n, int i)
{
	if (n <= 2)
		return ((n == 2) ? 1 : 0);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);

	return (isPrime(n, i + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 *                   otherwise return 0
 *
 * @n: number to check
 *
 * Return: true if number is prime number
 */
int is_prime_number(int n)
{
	return ((isPrime)(n, 2));
}
