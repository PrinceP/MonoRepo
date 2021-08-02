#include "BinarySearch.h"

std::string BinarySearch::getBinarySearchMessage(int inputArray[], int size_of_array, int key){
	
	int start = 0;
	int end = size_of_array - 1;

	while(start <= end){
		int mid = start + (end - start)/2;
		if(inputArray[mid] == key){
			return std::to_string(mid);
		}else if(inputArray[mid] > key){
			end = mid-1;
		}else{
			start = mid+1;
		}
	}
	
	return "-1";
}
