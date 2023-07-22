#include "sort.h"

/**
 * quick_sort -  sorts an array of integers in ascending order
 * @array: pointer to array of intgers
 * @size: the size of array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}
	quick_sort_helper(array, 0, size - 1, size);
}

/**
 * quick_sort_helper - recursion the array and sort
 * @array: pointer to array of partition
 * @low: starting index
 * @high: ending index
 * @size: the size of the array
 */
void quick_sort_helper(int *array, int low, int high, size_t size)
{
	int par;

	if (low < high)
	{
		par = partition(array, low, high, size);
		quick_sort_helper(array, low, par - 1, size);
		quick_sort_helper(array, par + 1, high, size);
	}
}

/**
 * partition - Lomuto partition scheme.
 * @array: pointer to array of intgers
 * @low: starting index of the partition
 * @height: etarting index of the partition
 * @size: the size of array
 * Return: the index of pivot
 */
int partition(size_t size, int *array, int low, int height)
{
	int i, j, pivot;

	i = low - 1;
	pivot = array[height];
	for (j = low; j < height; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (array[i] != array[j])
			{
				swap_b(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[height])
	{
		swap_b(&array[i + 1], &array[height]);
		print_array(array, size);
	}
	return (i + 1);
}


/**
 * swap_b - function that swap
 * @a: first
 * @b: second
 */
void swap_b(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

