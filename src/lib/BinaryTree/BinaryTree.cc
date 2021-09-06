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

void BinaryTree::printLevelOrder(Node* root){

	if(root == NULL){
		return;
	}
	std::queue<Node*> q;

	q.push(root);
	q.push(NULL);

	while(!q.empty()){

		if(q.front() != NULL){

			std::cout << q.front()->getData() << " ";

			if(q.front()->left){
				q.push(q.front()->left);
			}
			if(q.front()->right){
				q.push(q.front()->right);
			}
			
			q.pop();
		}
		else{
			q.pop();
			std::cout << std::endl;
			if(!q.empty()){
				q.push(NULL);
			}
		}		

	}

}


Node* BinaryTree::parseLevelOrder(){

	int d;
	std::cin>>d;

	Node* root = new Node(d);

	std::queue<Node*> q;
	q.push(root);

	while(!q.empty()){

		Node* current = q.front();
		q.pop();

		int c1, c2;
		std::cin>>c1>>c2;

		if(c1 != -1){
			current->left = new Node(c1);
			q.push(current->left);
		}

		if(c2 != -1){
			current->right = new Node(c2);
			q.push(current->right);
		}

	}

	return root;
}


int BinaryTree::getHeight(Node* root){
	if(root == NULL){
		return 0;
	}
	int h1 = getHeight(root->left);

	int h2 = getHeight(root->right);

	return 1+std::max(h1,h2);
	 
}

int BinaryTree::getDiameter(Node* root){
	if(root == NULL){
		return 0;
	}

	int D1 = getHeight(root->left) + getHeight(root->right) ;
	int D2 = getDiameter(root->left);
	int D3 = getDiameter(root->right);

	return std::max(D1, std::max(D2,D3));
	 
}

int BinaryTree::getSum(Node* root){
	if(root == NULL){
		return 0;
	}
	int s1 = getSum(root->left);

	int s2 = getSum(root->right);

	return root->getData()+ s1 + s2;
	 
}

std::vector<int> BinaryTree::printKthLevel(Node* root, int k){
    
    std::vector<int> result;
    
    if(k == 0){
        result.push_back(root->getData());
		std::cout << root->getData() << " ";
        return result;
    }
    
    std::queue<Node*> q;
    
    q.push(root);
    q.push(NULL);
    
    int i = 0;
    
    while(!q.empty()){
        
        if(q.front() == NULL){
            q.pop();
            i++;
            if(!q.empty()){
                q.push(NULL);
            }
            
        }
        else{
            Node* n = q.front();
            if(i==k){
                result.push_back(n->getData());
				std::cout << n->getData() << " ";
            }
            q.pop();
            if(n->left){
                q.push(n->left);
            }
            if(n->right){
                q.push(n->right);    
            }
            
        }
        
        
    }
    return result;  
}
