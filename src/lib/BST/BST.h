#ifndef TEMPLATE_GREETING_H
#define TEMPLATE_GREETING_H

#include <string>
#include <iostream>
#include <vector>

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
        Node* deleteInBST(Node* root, int data);
        bool findInBST(Node* root, int data);
        bool IsBST(Node* root);
        Node* mirrorBST(Node * root);

        void printInorderBST(Node* root);
        void printInRangeBST(Node* root, int key1, int key2);
        void printRoot2LeafBST(Node* root, std::vector<int> &path);
};

#endif
