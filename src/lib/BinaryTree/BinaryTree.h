#ifndef TEMPLATE_GREETING_H
#define TEMPLATE_GREETING_H

#include <string>
#include <iostream>

class Node{
    int data;
    
public:
    Node* left;
    Node* right;
    Node(int d):data(d),left(NULL),right(NULL){}
    int getData(){
        return data;
    }

};


class BinaryTree {
    public:
        std::string getBinaryTreeMessage();

        Node* parsePreOrder();
        void printPreOrder(Node* root);
        void printInOrder(Node* root);
        
};

#endif
