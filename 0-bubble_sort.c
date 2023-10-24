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
 * bubble_sort -  a function that sorts an array of
 * integers using the Bubble sort algorithm.
 * @array: an array of integers that will sorted.
 * @size: is the size of the array.
 */

void bubble_sort(int *array, size_t size)
{
	int flag = 0;
	size_t i, j;

	if (!array || size < 2)
		return;
	for (i = 0; i < (size - 1) && flag == 0; i++)
	{
		flag = 1;
		for (j = 0; j <= (size - 2); j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(array + j, array + j + 1);
				print_array(array, size);
				flag = 0;
			}
		}
	}
}
