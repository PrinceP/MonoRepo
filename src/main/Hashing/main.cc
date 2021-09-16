#include <iostream>
#include "src/lib/Hashing/Hashing.h"

int main(int argc, char** argv){
    Hashing<int> *greet = new Hashing<int>();
    std::cout << greet->getHashingMessage() << std::endl;

    greet->insert("Mango", 10);
    greet->insert("Apple", 120);
    greet->insert("Banana", 30);
    greet->insert("Kamalakam", 20);
    greet->print();
    
    std::cout << "Price of Mango is "<< *greet->search("Mango") << std::endl;
    
    return EXIT_SUCCESS;

}
