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

std::string BinarySearch::getBinarySearchOptimize(int inputArray[], int size_of_array, int key){

	int start = 0;
	int end = size_of_array - 1;
	
	while(end - start > 1){
		int mid = start + (end - start)/2;
		if(inputArray[mid]>=key){
			end = mid;
		}else{
			start = mid;
		}
	}

	if(inputArray[start] == key){
		return std::to_string(start);
	}else if(inputArray[end] == key){
		return std::to_string(end);
	}
	else{
		return "-1";
	}
}

std::string BinarySearch::getBinarySearchIndexOfMinimumRotatedArray(int inputArray[], int size_of_array){
	int start = 0;
	int end = size_of_array - 1;
	
	while(start <= end){
		
		if(start == end){
			return std::to_string(start);
		}

		int mid = start + (end - start)/2;

		if(inputArray[mid] < inputArray[end]){
			end = mid;
		}else{
			start = mid + 1;
		}
	}
	return "-1";

}

std::string BinarySearch::getBinarySearchInfiniteArray(int inputArray[], int key){

	int start = 0;
	int end = 1;
	int val = inputArray[start];
	while(val < key){
		start = end;
		end = 2 * end;
		val = inputArray[end];
	}

	while(end - start > 1){
		int mid = start + (end - start)/2;
		if(inputArray[mid]>=key){
			end = mid;
		}else{
			start = mid;
		}
	}

	if(inputArray[start] == key){
		return std::to_string(start);
	}else if(inputArray[end] == key){
		return std::to_string(end);
	}
	else{
		return "-1";
	}
	
}