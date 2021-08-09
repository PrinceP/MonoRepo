#include <iostream>
#include "src/lib/Pointer/Pointer.h"

int main(int argc, char** argv){
    // Pointer *greet = new Pointer();
    // std::cout << greet->getPointerMessage() << std::endl;

    //Address of variable
    int x = 10;
    std::cout << x << std::endl;
    std::cout << &x << std::endl;

    //Pointers and dereferencing
    int *xptr = &x;
    std::cout << xptr << std::endl;
    std::cout << *xptr << std::endl;

    int **xxptr = &xptr;
    std::cout << &xptr << std::endl;
    std::cout << xxptr << std::endl;


    //Reference variables 
    int y = 100;
    int &z = y;
    z++;
    y--;
    std::cout << y << std::endl;
    std::cout << z << std::endl;
    
    //Dynamic mem
    int *arr = new int[10];

    for(int i = 0; i < 10; i++){
        arr[i] = i;
    }

    delete []arr;
    std::cout << arr << std::endl;
    std::cout << arr[2] << std::endl;
    
    //2D Dynamic Array
    int **arr2d = new int*[10]; // rows
    for(int i=0; i < 10; i++){
        arr2d[i] = new int[10]; // col
    }

    for(int i=0; i < 10; i++){
        for(int j=0; j < 10; j++){
            arr2d[i][j] =  i*j;
        }
    }

    for(int i=0; i < 10; i++){
        for(int j=0; j < 10; j++){
            // std::cout << arr2d[i][j] << std::endl;
        }
    }

    delete []arr2d;
    
    return EXIT_SUCCESS;

}
