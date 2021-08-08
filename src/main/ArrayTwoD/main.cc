#include <iostream>
#include "src/lib/ArrayTwoD/ArrayTwoD.h"

int main(int argc, char** argv){
    ArrayTwoD *greet = new ArrayTwoD();

    int inputArray[][10] = {{1,2,3,4},
                            {5,6,7,8},
                            {9,10,11,12},
                            {13,14,15,16}};

    //greet->getArrayTwoDSpiralMessage(inputArray, 4, 4);
    
    std::vector<std::vector<int>> inputVector = {
                            {10,20,30,40},
                            {15,25,35,45},
                            {27,29,37,48},
                            {32,33,39,50}
                        };

    std::vector<int> res = greet->getArrayTwoDWaveMessage(4,4,inputVector);

    // for(auto x: res){
    //     std::cout << x << " ";
    // }
    // std::cout << std::endl;

    greet->getArrayTwoDStaircaseMessage(4,4,inputVector, 31);

    return EXIT_SUCCESS;

}
