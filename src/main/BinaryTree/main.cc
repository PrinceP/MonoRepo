#include <iostream>
#include "src/lib/BinaryTree/BinaryTree.h"

int main(int argc, char** argv){
    BinaryTree *greet = new BinaryTree();
    std::cout << greet->getBinaryTreeMessage() << std::endl;

    greet->parsePreOrder();
    return EXIT_SUCCESS;

}
