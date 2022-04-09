#include "my_lab.h"


int* array_merging(int first_array[], int second_array[], int first_array_len, int second_array_len) {
	int final_array_len = first_array_len + second_array_len;
	int* final_array;
	final_array = (int*)malloc(final_array_len * sizeof(first_array[0]));
	int j;
	
	
	for (int i = 0; i < second_array_len + 1; i++) 
	{
		final_array[i] = *(second_array + i);
		j = i;
	}
	for (int i = 0; i < first_array_len; i++)
		final_array[i + j] = *(first_array + i);


	for (int i = 0; i < final_array_len - 1; i++)
	{
		for (j = 0; j < final_array_len - i - 1; j++)
		{
			if (final_array[j] > final_array[j + 1])
			{
				
				int tmp = final_array[j];
				final_array[j] = final_array[j + 1];
				final_array[j + 1] = tmp;
			}
		}
	}
	return final_array;

	free(final_array);
}