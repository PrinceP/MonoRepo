#ifndef TEMPLATE_GREETING_H
#define TEMPLATE_GREETING_H

#include <string>
#include <unordered_map>

class Tries;

class Node{

    char data;
    bool isTerminal;
    std::unordered_map<char, Node*> m;

    public:
    
    Node(char data){
        this->data = data;
        isTerminal = false;
    }

    friend class Tries;

};


class Tries {

    Node *root;
    public:
        Tries(){
            root = new Node('/0');
        }

        void insert(std::string word){
            Node* temp = root;
            for(char ch: word){
                if(temp->m.count(ch)==0){
                    Node *n = new Node(ch);
                    temp->m[ch] = n;
                }
                temp = temp->m[ch];
            }
            temp->isTerminal = true;            
        }

        bool search(std::string word){
            Node* temp = root;
            for(char ch: word){
                if(temp->m.count(ch)==0){
                    return false;
                }
                temp = temp->m[ch];
            }
            return temp->isTerminal;            
        }

        std::string getTriesMessage();
};

#endif
