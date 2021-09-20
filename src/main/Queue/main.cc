#include <iostream>
#include "src/lib/Queue/Queue.h"

std::vector<char> firstnonrepeating(std::vector<char> str){
    std::queue<char> q;
    std::vector<char> result;
    char char_hash[256] = {0};
    
    for(int i = 0; i < str.size(); i++){
        
        q.push(str[i]);
        char_hash[str[i] - 'a']++;
        
        while(!q.empty()){
            
            if(char_hash[q.front() - 'a'] > 1){
                q.pop();
            }
            else{
                result.push_back(q.front());
                break;
            }
            
        }
        if (q.empty())
            result.push_back('0');
        
    }
    return result;   
}

std::queue<int> interLeave(std::queue<int> q){
    std::queue<int> q1, q2;
    int n = q.size();
    for(int i = 0; i<(n/2); i++){
        q1.push(q.front());
        q.pop();
    }
    for(int i = 0; i<(n/2); i++){
        q2.push(q.front());
        q.pop();
    }
    for(int i = 0; i<(n/2); i++){
        q.push(q1.front());
        q1.pop();
        q.push(q2.front());
        q2.pop();
    }
    return q;   
}


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

    std::cout << "Stack using queue" << std::endl;
    StackUsingQueue q3;
    q3.push(1);
    q3.push(2);
    q3.push(3);
    q3.push(4);

    q3.pop();
    q3.pop();
    
    q3.push(5);

    while(!q3.empty()){
        std::cout << q3.top() << std::endl;
        q3.pop();
    }

    return EXIT_SUCCESS;

}
