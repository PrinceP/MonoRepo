#include <iostream>
#include "src/lib/Hashing/Hashing.h"

int main(int argc, char** argv){
    Hashing<int> *greet = new Hashing<int>();
    std::cout << greet->getHashingMessage() << std::endl;

    return EXIT_SUCCESS;

}
