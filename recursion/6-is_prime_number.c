/**
 * find_divisor - find divisor for n from d to n.
 * @n: the number to check.
 * @d: the divisor
 *
 * Return: 1 if at least 1 divisor found,
 *         otherwise return 0
 */
int find_divisor(int n, int d)
{
if (n == d)
return (0);
if (!(n % d))
return (1);
return (find_divisor(n, d + 1));
}

/**
 * is_prime_number - check if number n is prime.
 * @n: the number to check.
 *
 * Return: 1 if n is a prime number,
 *         0 otherwise
 */

int is_prime_number(int n)
{
if (n < 2)
return (0);
return (!find_divisor(n, 2));
}
