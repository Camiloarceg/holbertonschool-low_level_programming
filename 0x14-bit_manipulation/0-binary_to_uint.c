#include "main.h"
/**
 * _strlen_recursion -  returns the length of a string.
 * @s: the string
 *
 * Return: the length of the string.
 */
int _strlen_recursion(const char *s)
{

	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 *_pow_recursion - returns the value of x raised to the power of y.
 * @x: base.
 * @y: exponent.
 *
 * Return: result.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary number on a string.
 *
 * Return: converted number or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, power = 0;
	int index;

	if (b == NULL)
		return (0);
	index = (_strlen_recursion(b) - 1);
	for (; index >= 0 ; power++)
	{
		if (b[index] == '0')
		{
			index--;
			continue;
		}
		if (b[index] == '1')
			dec += _pow_recursion(2, power);
		else
			return (0);
		index--;
	}
	return (dec);
}
