#include <iostream>
#include "src/lib/BinaryTree/BinaryTree.h"

int main(int argc, char** argv){
    BinaryTree *greet = new BinaryTree();
    std::cout << greet->getBinaryTreeMessage() << std::endl;
    std::cout << "Take input" << std::endl;
    
    Node* root = greet->parsePreOrder();
    
    std::cout << "Print preorder input" << std::endl;
    greet->printPreOrder(root);

    std::cout << "Print inorder input" << std::endl;
    greet->printInOrder(root);
    
    std::cout << "Print postorder input" << std::endl;
    greet->printPostOrder(root);
    
    return EXIT_SUCCESS;

}
