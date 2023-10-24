#include "sort.h"

/**
 * swap - A function that swap the value.
 * @x: The first value.
 * @z: Thw second value.
 */
void swap(int *x, int *z)
{
	int tmp = *x;
	*x = *z;
	*z = tmp;
}

/**
 * selection_sort -  a function that sorts an array of
 * integers using the Selection sort algorithm.
 * @array: an array of integers that will sorted.
 * @size: is the size of the array.
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + i) != min)
		{
			swap(array + i, min);
			print_array(array, size);
		}
	}
}
