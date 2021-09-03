#include "BinaryTree.h"

std::string BinaryTree::getBinaryTreeMessage(){
	return "Hello World!";
}

Node* BinaryTree::parsePreOrder(){

	int d;
	std::cin>>d;

	if(d==-1){
		return NULL;
	}

	Node* n = new Node(d);
	n->left = parsePreOrder();
	n->right = parsePreOrder();
	
	return n;

}

void BinaryTree::printPreOrder(Node* root){

	if(root == NULL){
		return;
	}
	std::cout<< root->getData() << std::endl;
	printPreOrder(root->left);
	printPreOrder(root->right);

}

void BinaryTree::printInOrder(Node* root){

	if(root == NULL){
		return;
	}
	printInOrder(root->left);
	std::cout<< root->getData() << std::endl;
	printInOrder(root->right);

}

void BinaryTree::printPostOrder(Node* root){

	if(root == NULL){
		return;
	}
	printPostOrder(root->left);
	printPostOrder(root->right);
	std::cout<< root->getData() << std::endl;
}