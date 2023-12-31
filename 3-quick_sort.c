#include "sort.h"

/**
 * swap_var - swap two int
 *
 * @a: int
 * @b: int
 */

void swap_var(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * partition_array - Partition an array and using pivot
 *
 * @array: Array
 * @low: int
 * @high: int
 * @size: size of array (size_t)
 *
 * Return: index of pivote (int)
 */

int partition_array(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int x = low - 1, y;

	for (y = low; y <= high; y++)
	{
		if (array[y] <= pivot)
		{
			x++;
			if (x != y)
			{
				swap_var(&array[x], &array[y]);
				print_array(array, size);
			}
		}
	}
	return (x);
}

/**
 * _qsort - Sorting Recursively an Array
 *
 * @array: Array to be sorted
 * @low: The lowest value of the array
 * @high: highest value of the array
 * @size: Size of The Array
 */

void _qsort(int *array, int low, int high, size_t size)
{
	int i;

	if (low < high)
	{
		i = partition_array(array, low, high, size);
		_qsort(array, low, i - 1, size);
		_qsort(array, i + 1, high, size);
	}
}
/**
 * quick_sort - Quick Sort Algorithme using lomuto partition
 *
 * @array: Array to sort
 * @size: Size of The Array
 */

void quick_sort(int *array, size_t size)
{
	_qsort(array, 0, size - 1, size);
}
