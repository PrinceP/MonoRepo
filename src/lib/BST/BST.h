#ifndef TEMPLATE_GREETING_H
#define TEMPLATE_GREETING_H

#include <string>
#include <iostream>

class Node{
    public:
    int key;
    Node* left;
    Node* right;
    Node(int key):key(key),left(NULL),right(NULL){}
};

class BST {
    public:
        std::string getBSTMessage();
        Node* insertInBST(Node* root, int data);
        bool findInBST(Node* root, int data);
        
        void printInorderBST(Node* root);
};

#endif
