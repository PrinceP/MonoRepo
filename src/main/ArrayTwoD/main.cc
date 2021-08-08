#include <iostream>
#include "src/lib/ArrayTwoD/ArrayTwoD.h"

int main(int argc, char** argv){
    ArrayTwoD *greet = new ArrayTwoD();

    int inputArray[][10] = {{1,2,3,4},
                            {5,6,7,8},
                            {9,10,11,12},
                            {13,14,15,16}};
                            
    greet->getArrayTwoDSpiralMessage(inputArray, 4, 4);

    return EXIT_SUCCESS;

}
