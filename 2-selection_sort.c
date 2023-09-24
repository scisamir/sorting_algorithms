#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: the array of integers to be sorted
 * @size: the size of the array
 *
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int idx, temp, swap;

	for (i = 0; i < size - 1; i++)
	{
		idx = i;
		swap = 0;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[idx])
			{
				idx = j;
				swap = 1;
			}
		}

		if (swap)
		{
			temp = array[i];
			array[i] = array[idx];
			array[idx] = temp;

			print_array(array, size);
		}
	}
}
