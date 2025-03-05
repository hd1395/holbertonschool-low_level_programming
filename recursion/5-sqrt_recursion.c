/**
 * find_sqrt - find square root for n from i to n.
 * @n: the number to check.
 * @i: the square root
 *
 * Return: 1 if square root found,
 *         otherwise return 0
 */

int find_sqrt(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (find_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion - calculate the natural square root of n.
 * @n: the number to check.
 *
 * Return: The sqrt of n, otherwise return 0
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (find_sqrt(n, 1));
}
