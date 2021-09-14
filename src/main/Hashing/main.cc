#include <iostream>
#include "src/lib/Hashing/Hashing.h"

int main(int argc, char** argv){
    Hashing *greet = new Hashing();
    std::cout << greet->getHashingMessage() << std::endl;

    return EXIT_SUCCESS;

}
