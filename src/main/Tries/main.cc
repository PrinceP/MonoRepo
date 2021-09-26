#include <iostream>
#include "src/lib/Tries/Tries.h"

int main(int argc, char** argv){
    Tries *greet = new Tries();
    std::cout << greet->getTriesMessage() << std::endl;

    return EXIT_SUCCESS;

}
