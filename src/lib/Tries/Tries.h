#ifndef TEMPLATE_GREETING_H
#define TEMPLATE_GREETING_H

#include <string>
#include <unordered_map>

class Node{

    char data;
    bool isTerminal;
    std::unordered_map<char, Node*> m;

    public:
    
    Node(char data){
        this->data = data;
        isTerminal = false;
    }

};


class Tries {

    Node *root;
    public:
        Tries(){
            root = new Node('/0');
        }

        void insert(std::string word){
            
        }
        std::string getTriesMessage();
};

#endif
