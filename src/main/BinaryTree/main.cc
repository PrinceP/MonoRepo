#include <iostream>
#include "src/lib/BinaryTree/BinaryTree.h"

int main(int argc, char** argv){

    //2 3 4 7 -1 -1 -1 10 -1 -1 8 18 -1 -1 -1
    
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

    std::cout << "Print levelorder input" << std::endl;
    greet->printLevelOrder(root);
    
    
    return EXIT_SUCCESS;

}
