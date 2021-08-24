#include <iostream>
#include "src/lib/Stacks/Stacks.h"


void insertAtbottom(std::stack<char> &s, char data){

    if(s.empty()){
        s.push(data);
        return;
    }

    char temp = s.top();
    s.pop();
    insertAtbottom(s, data);
    s.push(temp);
}

void reverse(std::stack<char> &s){

    if(s.empty()){
        return;
    }

    char temp = s.top();
    s.pop();
    reverse(s);
    insertAtbottom(s, temp);
    
}

int reverse(int n){
	std::stack<int> s;
	
	while(n){
	    int i = n%10;
	    s.push(i);
	    n = n / 10;
	}
    
    int res = 0;
	int i = 0;
	while(!s.empty()){
	    int x = s.top();
	    res += pow(10,i)*x;
	    i++;
	    s.pop();
	}
	return res;
}


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

    // insertAtbottom(s3,'!');
    reverse(s3);

    while(!s3.empty()){
        std::cout << s3.top() << std::endl;
        s3.pop();
    }
    

    return EXIT_SUCCESS;

}
