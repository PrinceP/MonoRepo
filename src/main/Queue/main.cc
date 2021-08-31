#include <iostream>
#include "src/lib/Queue/Queue.h"

int main(int argc, char** argv){
    // Queue *greet = new Queue();
    // std::cout << greet->getQueueMessage() << std::endl;
    std::cout << "Using circular array" << std::endl;

    Queue q(7);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    q.pop();
    q.pop();
    
    q.push(5);

    while(!q.empty()){
        std::cout << q.getfront() << std::endl;
        q.pop();
    }
    
    std::cout << "Using STL" << std::endl;
    std::queue<int> q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);

    q1.pop();
    q1.pop();
    
    q1.push(5);

    while(!q1.empty()){
        std::cout << q1.front() << std::endl;
        q1.pop();
    }

    return EXIT_SUCCESS;

}
