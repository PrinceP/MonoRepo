#include <iostream>
#include "src/lib/Graphs/Graphs.h"

int main(int argc, char** argv){
    Graphs *greet = new Graphs();
    std::cout << greet->getGraphsMessage() << std::endl;

    

    return EXIT_SUCCESS;

}
