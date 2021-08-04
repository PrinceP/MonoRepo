#include "Rotation1D.h"

std::vector<int> Rotation1D::getRotation1DMessage(std::vector<int> input_Vec, int k_rotations){
	std::vector<int> result;
    int size = input_Vec.size();

    int new_k = k_rotations % size;
    
    for(int i =0; i<input_Vec.size(); i++)
    {
        if(i<new_k){
            result.push_back(input_Vec[size + i - new_k]);
        }else{
            result.push_back(input_Vec[i - new_k]);
        }
    }
    return result;
}
