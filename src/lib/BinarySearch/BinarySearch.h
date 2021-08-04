#ifndef TEMPLATE_GREETING_H
#define TEMPLATE_GREETING_H

#include <string>
#include <climits>

class BinarySearch {
    public:
        std::string getBinarySearchMessage(int inputArray[], int size_of_array, int key);
        std::string getBinarySearchOptimize(int inputArray[], int size_of_array, int key);
        std::string getBinarySearchIndexOfMinimumRotatedArray(int inputArray[], int size_of_array);
        std::string getBinarySearchInfiniteArray(int inputArray[], int key);
        std::string getClosestPair(int inputArray[], int size_of_array, int key);
        
};

#endif
