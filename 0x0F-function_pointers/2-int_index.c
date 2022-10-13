#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 *
 * @array: the passed array
 * @size: the size of the array
 * @cmp: a pointer to the function to be used to compare values
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	
	if (size > 0 && cmp && size && array)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return(i);
	}
	return (-1);
}
