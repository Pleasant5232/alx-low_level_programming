#include "function_pointers.h"
/**
 * int_index - point of entry
 * @array: the array to search
 * @size: size of the array
 * @cmp: function pointer
 *
 * Return: the index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || (size <= 0))
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]) == 1)
			return (i);

	return (-1);
}
