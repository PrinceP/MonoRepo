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

std::vector<int> Sorting::getInsertionSortingMessage(std::vector<int> input_Vec){
	int n = input_Vec.size();
    
	for(int i = 1; i <= n - 1; i++){

		int current = input_Vec[i];
		int prev = i - 1;

		while(prev >= 0 && current < input_Vec[prev]){
			input_Vec[prev + 1] = input_Vec[prev];
			prev = prev - 1;
		}

		input_Vec[prev + 1] = current;
	}
	return input_Vec;
}


std::vector<int> Sorting::getSelectionSortingMessage(std::vector<int> input_Vec){
	int n = input_Vec.size();
	
	for(int i = 0; i <= n - 2 ; i++){
		
		int min_position = i;

		for(int j = i; j<n; j++){
			if(input_Vec[j] < input_Vec[min_position]){
				min_position = j;
			}
		}
		std::swap(input_Vec[min_position], input_Vec[i]);

	}
	return input_Vec;
}

std::vector<int> Sorting::getCountingSortingMessage(std::vector<int> input_Vec){
	int n = input_Vec.size();
	int max_element = -INT_MAX;
	int min_element = +INT_MAX;
	std::vector<int> result;

	for(int i = 0; i < n ; i++){
		max_element = std::max(input_Vec[i], max_element);
		min_element = std::min(input_Vec[i], min_element);
	}

	std::vector<int> freq(max_element + 1, 0);
	for(int x: input_Vec){
		freq[x] = freq[x] + 1;
	}

	int j = 0;
	for(int i = 0; i < max_element + 1 ; i++){

		while(freq[i]){
			input_Vec[j] = i;
			freq[i] = freq[i] - 1;
			j++;  
		}

	}

	return input_Vec;
}

int pairSticks(std::vector<int> length, int D)
{
    // your code goes here
    sort(length.begin(), length.end());
    
    int num = 0;
    for(int i = 0; i < length.size() - 1;){
        
        if((length[i] - length[i+1]) <= D ){
            num++;
            i = i + 2;
        }
        else{
            i = i + 1;
        }
        
    }
    return num;
}
