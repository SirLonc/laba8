#include <stdio.h>
#include "my_lab.h"
#include <stdlib.h>


int main() {
	int first_array[] = { 18,19,23,41 };
	int second_array[] = { 34,45,56,81 };
	int first_array_len = sizeof(first_array) / sizeof(first_array[0]);
	int second_array_len = sizeof(second_array) / sizeof(second_array[0]);



	int * final_array = array_merging(first_array, second_array, first_array_len, second_array_len);



	for (int i = 0; i < first_array_len + second_array_len; i++) {
		printf("%d \n", *(final_array + i));
	}
}