#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints an integer
 * @array: is pointer to int
 * @action: is a pointer to the function
 * @size: is the size of the array
 *
 * Return: Nothing.
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t c;
if (array == NULL || action == NULL)
{
return;
}
for (c = 0; c < size; c++)
{
action(array[c]);
}
}

