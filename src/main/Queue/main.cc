#include <iostream>
#include "src/lib/Queue/Queue.h"

int main(int argc, char** argv){
    Queue *greet = new Queue();
    std::cout << greet->getQueueMessage() << std::endl;

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
    

    return EXIT_SUCCESS;

}
