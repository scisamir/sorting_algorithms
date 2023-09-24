#include "sort.h"

/**
 * swap - swaps two integers
 * @a: first input
 * @b: second input
 *
 * Return: Nothing
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


/**
 * partition - partitions the list
 * @array: the array to partition
 * @start: start of the list
 * @end: end of the list
 * @size: size of the list
 *
 * Return: the position of the swapped pivot
 */

int partition(int *array, int start, int end, size_t size)
{
	int i = start - 1;
	int j;
	int pivot = array[end];

	for (j = start; j < end; j++)
	{
		if (array[j] < pivot)
		{
			i++;

			if (array[i] != array[j])
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	i++;

	if (array[i] != array[j])
	{
		swap(&array[i], &array[end]);
		print_array(array, size);
	}

	return (i);
}


/**
 * my_quick_sort - sorts an array of integers in ascending order using the
 * Quick sort algorithm with the Lomuto partition scheme
 * @array: the array to be sorted
 * @start: the start of the array
 * @end: the end of the array
 * @size: the size of the array
 *
 * Return: Nothing
 */

void my_quick_sort(int *array, int start, int end, size_t size)
{
	if (start < end)
	{
		int part = partition(array, start, end, size);

		my_quick_sort(array, start, part - 1, size);
		my_quick_sort(array, part + 1, end, size);
	}
}


/**
 * quick_sort - sorts an array of integers in ascending order using the
 * Quick sort algorithm with the Lomuto partition scheme
 * @array: the array to be sorted
 * @size: the size of the array
 *
 * Return: Nothing
 */

void quick_sort(int *array, size_t size)
{
	int my_size = (int)size;

	my_quick_sort(array, 0, my_size - 1, size);
}
