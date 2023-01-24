#include "sort.h"

/**
 * swapEl - swap elements of an array and sort in ascending order
 * @a: pinter to first element
 * @b: second element
 */
void swapEl(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - sort array in ascending order using selection sort
 * @array: array of elements to be sorted
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	int *small;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		small = array + i;
		for (j = i + 1; j < size; j++)
		{
			small = (array[j] < *small) ? (array + j) : small;
		}
		if ((array + i) != small)
		{
			swapEl(array + i, small);
			print_array(array, size);
		}
	}
}
