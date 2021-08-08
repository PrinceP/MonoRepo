#ifndef TEMPLATE_ARRAYTWOD_H
#define TEMPLATE_ARRAYTWOD_H

#include <string>
#include <iostream>
#include <vector>

class ArrayTwoD {
    public:
        std::string getArrayTwoDSpiralMessage(int TwoDArray[][10], int n, int m);
        std::vector<int> getArrayTwoDWaveMessage(int m, int n, std::vector<std::vector<int>> arr);
        std::vector<int> getArrayTwoDStaircaseMessage(int m, int n, std::vector<std::vector<int>> arr, int key);
};

#endif