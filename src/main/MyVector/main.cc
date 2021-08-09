#include <iostream>
#include "src/lib/MyVector/MyVector.h"

int main(int argc, char** argv){
    MyVector *greet = new MyVector();
    std::cout << greet->getMyVectorMessage() << std::endl;

    // std::vector<int> myvec= {1,2,3,4,5};

    std::vector<int> myvec(10,2);
    for(auto i: myvec){
        std::cout << i << " "; 
    }
    std::cout << std::endl;


    return EXIT_SUCCESS;

}
