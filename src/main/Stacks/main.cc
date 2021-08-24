#include <iostream>
#include "src/lib/Stacks/Stacks.h"


int main(int argc, char** argv){

    Stacks *greet = new Stacks();
    std::cout << greet->getStacksMessage() << std::endl;

    std::cout << "Using linked list " << std::endl;
    
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

    std::cout << "Using Vectors " << std::endl;
    Stackvec<char> s2;
    s2.push('h');
    s2.push('e');
    s2.push('l');
    s2.push('l');
    s2.push('o');

    while(!s2.empty()){
        std::cout << s2.top() << std::endl;
        s2.pop();
    }

    std::cout << "Using Stacks " << std::endl;
    std::stack<char> s3;
    s3.push('h');
    s3.push('e');
    s3.push('l');
    s3.push('l');
    s3.push('o');

    while(!s3.empty()){
        std::cout << s3.top() << std::endl;
        s3.pop();
    }

    

    return EXIT_SUCCESS;

}
