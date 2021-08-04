#include "Sorting.h"

std::vector<int> Sorting::getBubbleSortingMessage(std::vector<int> input_Vec){
	int n = input_Vec.size();
    
    bool swapped = false;
    
	for(int i = 0; i < n - 1; i++){
	    swapped = false;
		for(int j = 0; j < n - i - 1; j++){

			if(input_Vec[j] > input_Vec[j+1]){
			    swapped = true;
				std::swap(input_Vec[j], input_Vec[j+1]);
			}
			if(!swapped){
			    break;
			}
		}
	}

	return input_Vec;
}
