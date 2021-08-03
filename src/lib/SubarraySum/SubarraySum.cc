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

std::string SubarraySum::getSubarraySumPrefixSumMessage(int inputArray[], int size_of_array){

	int prefixSum[1000] = {0};
	prefixSum[0] = inputArray[0];
	for(int i=1; i<size_of_array; i++){
		prefixSum[i] = prefixSum[i-1] + inputArray[i];
	}

	int max_subarray_sum = 0;

	for(int i=0; i<size_of_array; i++){
		for (int j = i+1; j < size_of_array; j++){

			int subarray_sum = i>0? prefixSum[j] - prefixSum[i-1] : prefixSum[j];
			max_subarray_sum = std::max(subarray_sum, max_subarray_sum);
		}
	}

	return std::to_string(max_subarray_sum);
}

std::string SubarraySum::getSubarraySumKandaneMessage(int inputArray[], int size_of_array){

	int max_subarray_sum = 0;
	int subarray_sum = 0;

	for(int i = 0; i < size_of_array; i++){

		subarray_sum += inputArray[i];
		if(subarray_sum < 0){ 
			subarray_sum = 0;
		}
		max_subarray_sum = std::max(subarray_sum, max_subarray_sum);
	}

	return std::to_string(max_subarray_sum);
}