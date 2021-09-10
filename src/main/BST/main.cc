#include <iostream>
#include "src/lib/BST/BST.h"

int main(int argc, char** argv){
    BST *greet = new BST();
    std::cout << greet->getBSTMessage() << std::endl;

    BST *bst = new BST();
    Node* root = NULL;

    int arr[] = {4, 2, 3, 10, 8, 7, 18, 1};
    for(int i: arr){
        root = bst->insertInBST(root, i);
    }
    bst->printInorderBST(root);

    std::cout << std::endl;
    std::cout << "Find 1 in the BST: " << greet->findInBST(root, 1) << std::endl;

    std::cout << "Delete 1 in the BST: ";
    root = greet->deleteInBST(root, 1);
    bst->printInorderBST(root);
    std::cout << std::endl;

    std::cout <<"In Range from 4 to 18" << std::endl;

    bst->printInRangeBST(root, 4, 18);

    std::cout << std::endl;

    std::cout <<"Root to Leaf Paths" << std::endl;

    std::vector<int> path;
    bst->printRoot2LeafBST(root, path);

    std::cout <<"Is BST ";
    std::cout << bst->IsBST(root);


    return EXIT_SUCCESS;

}
