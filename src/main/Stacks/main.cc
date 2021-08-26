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

std::vector<int> getSpanStocks(std::vector<int> stocks){

    std::stack<int> s;
    std::vector<int> result_span;
    result_span.push_back(1);
    s.push(0);

    for(int i=1; i<=stocks.size()-1; i++){

        int currentPrice = stocks[i];
        while(!s.empty() && stocks[s.top()] <= currentPrice){
            s.pop();
        }
        if(!s.empty()){
            int highestPrice = s.top();
            result_span.push_back(i - highestPrice);
        }
        else{
            result_span.push_back(i+1);
        }
        s.push(i);
    }

    return result_span;
}

//11, 13, 21, 3
//13, 21, -1, -1

std::vector<int> getNextGreaterElement(std::vector<int> input){

    std::stack<int> s;
    std::vector<int> result;
    s.push(input[0]);

    for(int i=1; i<=input.size()-1; i++){

        if (s.empty()) {
            s.push(input[i]);
            continue;
        }

        int currentElement = input[i];
        while(!s.empty() && s.top() < currentElement){
            result.push_back(input[i]);
            s.pop();
        }
        
        s.push(input[i]);
    }

    while(!s.empty()){
        result.push_back(-1);
        s.pop();
    }

    return result;
}


//Duplicate parathethesis
bool duplicateParentheses(std::string str){
    
    std::stack<char> Stack;
    
    // Iterate through the given expression
    for (char ch : str)
    {
        // if current character is close parenthesis ')'
        if (ch == ')')
        {
            // pop character from the stack
            char top = Stack.top();
            Stack.pop();
 
            // stores the number of characters between a
            // closing and opening parenthesis
            // if this count is less than or equal to 1
            // then the brackets are redundant else not
            int elementsInside = 0;
            while (top != '(')
            {
                elementsInside++;
                top = Stack.top();
                Stack.pop();
            }
            if(elementsInside < 1) {
                return true;
            }
        }
 
        else
            Stack.push(ch);
    }
    return false;   
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
