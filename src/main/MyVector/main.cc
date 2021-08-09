#include <iostream>
#include "src/lib/MyVector/MyVector.h"
#include <algorithm>
#include <cmath>

bool comparator(std::pair<int,int> x, std::pair<int,int> y){
    float x_dist = sqrt(pow(x.first,2) + pow(x.second,2));
    float y_dist = sqrt(pow(y.first,2) + pow(y.second,2));
    if(x_dist <= y_dist){
        return true;
    }else{
        return false;
    }
    
}
std::vector<std::pair<int,int>> sortCabs(std::vector<std::pair<int,int>> v){
    // your code  goes here
    std::sort(v.begin(), v.end(), comparator);
    return v;
}


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
