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
 * bubble_sort - sorts an array of integers in ascending order
 * @array: pointer to array of intgers
 * @size: the size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swaped = 0;

	if (size < 2 || size == 0 || array == NULL)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap_b(&array[j], &array[j + 1]);
				print_array(array, size);
				swaped += 1;
			}
		}
		if (swaped == 0)
		{
			return;
		}
	}
}
