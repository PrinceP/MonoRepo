#ifndef TEMPLATE_GREETING_H
#define TEMPLATE_GREETING_H

#include <string>
#include <vector>
#include <climits>

class Sorting {
    public:
        std::vector<int> getBubbleSortingMessage(std::vector<int> input_Vec);
        std::vector<int> getInsertionSortingMessage(std::vector<int> input_Vec);
        std::vector<int> getSelectionSortingMessage(std::vector<int> input_Vec);
        std::vector<int> getCountingSortingMessage(std::vector<int> input_Vec);
};

#endif
