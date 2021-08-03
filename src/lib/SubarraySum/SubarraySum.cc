#include "SubarraySum.h"

std::string SubarraySum::getSubarraySumMessage(int inputArray[], int size_of_array){

	int max_subarray_sum = 0;

	for(int i=0; i<size_of_array; i++){
		for (int j = i+1; j < size_of_array; j++){
			int subarray_sum = 0;
			for(int k=i;k<=j;k++){
				subarray_sum += inputArray[k];
			}
			max_subarray_sum = std::max(subarray_sum, max_subarray_sum);
		}
	}

	return std::to_string(max_subarray_sum);
}
