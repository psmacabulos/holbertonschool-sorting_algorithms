#include "sort.h"

/**
* bubble_sort - Sorts an array of integers in ascending order
*               using the Bubble sort algorithm
*
* @array: Pointer to the array
* @size: Size of the array
*/
void bubble_sort(int *array, size_t size)
{
	size_t j;
	int temp;

	if (array == NULL || size < 2)
		return;

	for (j = 0; j < size - 1; j++)
	{
		if (array[j] > array[j + 1])
		{
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] =  temp;
		}

	}

}
