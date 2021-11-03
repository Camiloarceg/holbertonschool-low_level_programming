#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on
 *		     each element of an array.
 * @array: the array of numbers.
 * @size: the size of the array.
 * @action: pointer to the funtion.
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
		for (i = 0 ; i < size ; i++)
			action(array[i]);
}

