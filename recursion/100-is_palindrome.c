/**
 * _strlen_recursion - returns the length of a string.
 * @s: String to calculate length for.
 *
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
if (*s)
return (1 + _strlen_recursion(s + 1));
return (0);
}
/**
 * _is_palindrome - check if s is palindrome up to length i.
 * @s: String to check.
 * @i: the length to check up to
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int _is_palindrome(char *s, int i)
{
if (!*s || _strlen_recursion(s) - i == 1 ||
(_strlen_recursion(s) - i == 2 && *s == *(s + 1)))
return (1);
if (_strlen_recursion(s) - i == 2 && *s != *(s + 1))
return (0);
return (_is_palindrome(s + 1, i + 1));
}
/**
 * is_palindrome - check if s is palindrome.
 * @s: String to check.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
if (!*s || _strlen_recursion(s) == 1 ||
(_strlen_recursion(s) == 2 && *s == *(s + 1)))
return (1);
if (_strlen_recursion(s) == 2 && *s != *(s + 1))
return (0);
return (_is_palindrome(s + 1, 1));
}
