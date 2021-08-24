#include <iostream>
#include "src/lib/Stacks/Stacks.h"

int main(int argc, char** argv){

    Stacks *greet = new Stacks();
    std::cout << greet->getStacksMessage() << std::endl;

    Stack<char> s;
    s.push('h');
    s.push('e');
    s.push('l');
    s.push('l');
    s.push('o');

    while(!s.empty()){
        std::cout << s.top() << std::endl;
        s.pop();
    }

    return EXIT_SUCCESS;

}
