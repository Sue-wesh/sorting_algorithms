#include <stdio.h>
#include "sort.h"

/**
 * swap - funnction two swap two integers in an array
 * @a: first integer to swap
 * @b: second element to swap
 */

void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - sort array in ascending order using bubble sort
 * @array: array that is to be sorted
 * @size: the size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	bool check = false;

	if (array == NULL || size < 2)
		return;
	
	while (check == false)
	{
		check = true;
		for (i = 0; i < (size - 1); i++)
		{
			if (array[i] > array[i+1])
			{
				swap(array + i, array + i + 1);
				print_array(array, size);
				check = false;
			}
		}
		size--;
	}
}
