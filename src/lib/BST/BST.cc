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

void BST::printInRangeBST(Node* root, int key1, int key2){

	if(root != NULL){
		if(root->key >= key1 && root->key <= key2){
			printInRangeBST(root->left, key1, key2);
			std::cout << root->key << " ";
			printInRangeBST(root->right, key1, key2);
		}
		else if(root->key < key1){
			printInRangeBST(root->right, key1, key2);
		}
		else {
			//root->key > key2
			printInRangeBST(root->left, key1, key2);
		}

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


bool BST::findInBST(Node* root, int data){

	if(root == NULL){
		return false;
	}
	if(root->key == data){
		return true;
	}

	if(root->key > data){
		return findInBST(root->left, data);
	}else{
		return findInBST(root->right, data);
	}
}

Node* findMin(Node* root){

	while(root->left != NULL){
		root = root->left;
	}
	return root;

}

Node* BST::deleteInBST(Node* root, int data){

	if(root == NULL){
		return NULL;
	}

	if(root->key > data){
		root->left = deleteInBST(root->left, data);
	}else{
		root->right = deleteInBST(root->right, data);
	}

	if(root->key == data){
		if(root->left == NULL && root->right == NULL){
			delete root;
			root = NULL;
		}
		else if(root->left == NULL){
			Node* temp = root;
			root = root->right;
			delete temp;
		}
		else if(root->right == NULL){
			Node* temp = root;
			root = root->left;
			delete temp;
		}
		else{
			Node* temp = findMin(root->right);
			root->key = temp->key;
			root->right = deleteInBST(root->right,temp->key);
		}
	}
	return root;
}

void BST::printRoot2LeafBST(Node* root, std::vector<int> &path){

	if(root == NULL){
		return;
	}

	if(root->left == NULL && root->right == NULL){

		for(int x: path){
			std::cout<< x << " ";
		}
		std::cout<<root->key<<std::endl;
		return;
	}

	path.push_back(root->key);
	printRoot2LeafBST(root->left, path);
	printRoot2LeafBST(root->right, path);
	path.pop_back();

}

