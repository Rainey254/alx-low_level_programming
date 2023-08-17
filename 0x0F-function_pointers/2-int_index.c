#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: Name passed
 * @size: Number of iterations
 * @cmp: Points to a function
 * Return: Always 0 (success)
**/
int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (c = 0; c < size; c++)
	{
		if (cmp(array[c]))
		{
			return (c);
		}
	}

	return (-1);
}

