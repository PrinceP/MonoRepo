#ifndef TEMPLATE_GREETING_H
#define TEMPLATE_GREETING_H

#include <string>
#include <iostream>
#include <queue>

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
        Node* parseLevelOrder();
        
        void printPreOrder(Node* root);
        void printInOrder(Node* root);
        void printPostOrder(Node* root);
        void printLevelOrder(Node* root);
        int getHeight(Node* root);
};

#endif
