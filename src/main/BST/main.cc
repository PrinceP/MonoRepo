#include <iostream>
#include "src/lib/BST/BST.h"

int main(int argc, char** argv){
    BST *greet = new BST();
    std::cout << greet->getBSTMessage() << std::endl;

    BST *bst = new BST();
    Node* root = NULL;

    int arr[] = {2, 3, 4, 7, 10, 8, 18, 1};
    for(int i: arr){
        root = bst->insertInBST(root, i);
    }
    bst->printInorderBST(root);

    std::cout << std::endl;
    std::cout << "Find 1 in the BST: " << greet->findInBST(root, 1) << std::endl;


    return EXIT_SUCCESS;

}
