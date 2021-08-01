#include <iostream>
#include "src/lib/BinarySearch/BinarySearch.h"

int main(int argc, char** argv){
    BinarySearch *greet = new BinarySearch();
    std::cout << greet->getBinarySearchMessage() << std::endl;

    return EXIT_SUCCESS;

}
