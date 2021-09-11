#include <iostream>
#include "src/lib/Heap/Heap.h"

int main(int argc, char** argv){
    Heap *greet = new Heap();
    std::cout << greet->getHeapMessage() << std::endl;

    return EXIT_SUCCESS;

}
