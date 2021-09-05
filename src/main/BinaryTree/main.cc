#include <iostream>
#include "src/lib/BinaryTree/BinaryTree.h"

int main(int argc, char** argv){

    //2 3 4 7 -1 -1 -1 10 -1 -1 8 18 -1 -1 -1 - Preorder input
    //2 3 8 4 10 18 -1 7 -1 -1 -1 -1 -1 -1 -1 - Level order input

    BinaryTree *greet = new BinaryTree();
    std::cout << greet->getBinaryTreeMessage() << std::endl;
    std::cout << "Take preorder input" << std::endl;
    
    Node* root = greet->parsePreOrder();
    
    std::cout << "Print preorder input" << std::endl;
    greet->printPreOrder(root);

    std::cout << "Print inorder input" << std::endl;
    greet->printInOrder(root);
    
    std::cout << "Print postorder input" << std::endl;
    greet->printPostOrder(root);

    std::cout << "Print levelorder input" << std::endl;
    greet->printLevelOrder(root);

    std::cout << "Height ";
    std::cout << greet->getHeight(root) << std::endl;;

    
    std::cout << "Take level order input" << std::endl;
    Node* root2 = greet->parseLevelOrder();
    
    std::cout << "Print levelorder input" << std::endl;
    greet->printLevelOrder(root2);
    
    std::cout << "Height ";
    std::cout << greet->getHeight(root2) << std::endl;
    

    return EXIT_SUCCESS;

}
