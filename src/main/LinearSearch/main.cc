#include <iostream>
#include "src/lib/LinearSearch/LinearSearch.h"

int main(int argc, char** argv){
    LinearSearch *ls = new LinearSearch();

    int sample_arr[] = {2, 123, 3, 6, 4, 63, 7743, 21, 1};
    int size_of_arr = sizeof(sample_arr)/sizeof(int);
    
    std::string result = ls->getSearch(sample_arr, size_of_arr, 21);
    if(result != "-1"){
        std::cout << "Element NOT found" << std::endl;    
    }else{
        std::cout << "Element found at " << result << std::endl;
    }
    
    return EXIT_SUCCESS;

}
