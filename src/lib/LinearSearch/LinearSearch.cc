#include "LinearSearch.h"

std::string LinearSearch::getSearch(int inputArray[], int size_of_array, int key){
	
	for(int i = 0; i < size_of_array; i++){
		if(inputArray[i] == key){
			return std::to_string(i);
		}
	}
	
	return "-1";
}
