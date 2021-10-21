/**
 * _strlen_recursion - returns the length of a string in a recursive manner.
 * @s: the string to be print.
 *
 * Return: the length of the string.
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * palindrome - helper function to verify if a string is palindromic
 *               or not.
 * @s: the string to be operated upon.
 * @half: the length of the string.
 * @b: points to the end.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int palindrome(char *s, char *b, int half)
{
	if (*s != *b)
	{
		return (0);
	}
	else if (half == 0)
	{
		return (1);
	}
	return (palindrome(s + 1, b - 1, half - 1));
}
/**
 * is_palindrome - returns if a string is palindromic.
 * @s: the string to be operated.
 *
 * Return: the helper function _prime(n, 5)
 */
int is_palindrome(char *s)
{
	int half;
	char *b = s;


	half = _strlen_recursion(s) / 2;
	b = &s[_strlen_recursion(s) - 1];

	return (palindrome(s, b, half));
}
