#ifndef TEMPLATE_GREETING_H
#define TEMPLATE_GREETING_H

#include <string>

class SubarraySum {
    public:
        std::string getSubarraySumMessage(int inputArray[], int size_of_array);
        std::string getSubarraySumPrefixSumMessage(int inputArray[], int size_of_array);
        std::string getSubarraySumKandaneMessage(int inputArray[], int size_of_array);
        std::string getSubarraySumFindMessage(int inputArray[], int size_of_array, int key);
        
};

#endif
