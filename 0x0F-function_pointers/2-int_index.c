#include "function_pointers.h"
/**
 * int_index -  searches for an integer.
 * @array: array of ints.
 * @size: number of int in the array.
 * @cmp: funtion to call.
 *
 * Return: -1 if error, oter number otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0 ; i < size ; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
