#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: the array to be sorted
 * @size: the size of the array
 *
 * Return: Nothing
 */


void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, swapped;

	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		swapped = 0;

		for (j = 0; j < size - (i + 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				swapped = 1;
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
		if (!swapped)
			return;
	}
}
