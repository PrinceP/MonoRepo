#include <iostream>
#include "src/lib/Heap/Heap.h"

int main(int argc, char** argv){
    Heap *greet = new Heap();
    std::cout << greet->getHeapMessage() << std::endl;

    int arr[] = {23, 21,41, 52, 64, 74, 100};
    
    std::priority_queue<int> pque;
    for(int x: arr){
        pque.push(x);
    }
    while(!pque.empty()){
        std::cout << pque.top() << " ";
        pque.pop();
    }
    return EXIT_SUCCESS;

}
