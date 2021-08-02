#include <iostream>
#include "src/lib/BinarySearch/BinarySearch.h"

int main(int argc, char** argv){
    BinarySearch *bs = new BinarySearch();
    int sample_arr[] = {1,2,3,4,5,6,7,7,8,9};
    int size_of_arr = sizeof(sample_arr)/sizeof(int);
    
    std::string result = bs->getBinarySearchMessage(sample_arr, size_of_arr, 7);
    if(result != "-1"){
        std::cout << "Element NOT found" << std::endl;    
    }else{
        std::cout << "Element found at " << result << std::endl;
    }
    return EXIT_SUCCESS;

}
