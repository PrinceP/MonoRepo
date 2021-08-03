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

std::string SubarraySum::getSubarraySumFindMessage(int inputArray[], int size_of_array, int key){

	int cur_subarray_sum = inputArray[0];
	int start = 0;

	for(int i = 1; i <= size_of_array; i++){

		while(cur_subarray_sum > key && start < size_of_array - 1){

			cur_subarray_sum = cur_subarray_sum - inputArray[start];
			start += 1;
		}

		if(cur_subarray_sum == key){
			return std::to_string(start)+"-"+std::to_string(i-1);
		}

		cur_subarray_sum += inputArray[i];

	}
	return std::to_string(0);
}

std::string SubarraySum::getSubarraySumFindNegativeMessage(int inputArray[], int size_of_array, int key){

	std::unordered_map<int, int> map;

	int cur_subarray_sum = 0;
	for(int i=0; i<size_of_array;i++){

		cur_subarray_sum += inputArray[i];

		if(cur_subarray_sum == key){
			return std::to_string(0)+"-"+std::to_string(i);
		}

		if(map.find(cur_subarray_sum - key) != map.end())
		{
			return std::to_string(map[cur_subarray_sum-key]+1)+"-"+std::to_string(i);
		}

		map[cur_subarray_sum] = i;		

	}

	return std::to_string(0);
}