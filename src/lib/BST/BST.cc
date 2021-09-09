#include "BST.h"

std::string BST::getBSTMessage(){
	return "Hello World!";
}

void BST::printInorderBST(Node* root){

	if(root != NULL){
		printInorderBST(root->left);
		std::cout << root->key << " ";
		printInorderBST(root->right);
	}
}


Node* BST::insertInBST(Node* root, int data){

	if(root == NULL){
		return new Node(data);
	}

	if(root->key > data){
		root->left = insertInBST(root->left, data);
	}else{
		root->right = insertInBST(root->right, data);
	}

	return root;
}
