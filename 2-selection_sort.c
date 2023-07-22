#include "sort.h"

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

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: pointer to array of intgers
 * @size: the size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	if (array == NULL || size == 0)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			swap_b(&array[min], &array[i]);
			print_array(array, size);
		}
	}
}
