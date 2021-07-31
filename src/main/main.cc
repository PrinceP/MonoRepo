#include <iostream>
#include "src/lib/Greeting.h"

int main(int argc, char** argv){
    Greeting *greet = new Greeting();
    std::cout << greet->getGreetingMessage() << std::endl;

    return EXIT_SUCCESS;

}
