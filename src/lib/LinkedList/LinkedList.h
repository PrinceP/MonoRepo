#ifndef TEMPLATE_GREETING_H
#define TEMPLATE_GREETING_H

#include <string>
#include <iostream>

class Node {
    int data;

    public:
        Node(int d):data(d),next(NULL){}
        ~Node(){
            if(next != NULL){
                delete next;
            }
            std::cout << "Deleted "<< data << std::endl;
            
        }
        Node* next;
        int getData(){
            return data;
        }
};


class LinkedList {

    Node* head;
    Node* tail;

    public:
        LinkedList():head(NULL),tail(NULL){}

        ~LinkedList(){
            if(head != NULL){
                delete head;
            }
        }

        std::string getLinkedListMessage();
        
        void printLinkedList(){
            Node* temp = head;
            while(temp){
                std::cout << temp->getData()<<" ";
                temp = temp->next;
            }
            std::cout << std::endl;
        }

        void pushFront(int new_data){
            if(head == NULL){
                Node* n = new Node(new_data);
                head = n;
                tail = n;
            }
            else{
                Node* n = new Node(new_data);
                n->next = head;
                head = n;
            }
        }

        void pushBack(int new_data){
            if(head == NULL){
                Node* n = new Node(new_data);
                head = n;
                tail = n;
            }
            else{
                Node* n = new Node(new_data);
                tail->next = n;
                tail = n;
            }
        }

        void insertAfter(int new_data, int pos){
            if(pos==0){
                Node* n = new Node(new_data);
                n->next = head->next;
                head = n;
            }else{
                Node* temp = head;
                for(int i = 1; i < pos; i++){
                    if(temp->next){
                        temp = temp->next;    
                    }
                }
                if(temp){
                    Node* n = new Node(new_data);
                    n->next = temp->next;
                    temp->next = n;
                }
            }
        }

        void popFront(){
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
        
        void popBack(){
            Node* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            tail = temp;
            tail->next = NULL;
            temp = temp->next;
            delete temp;
        }
        



};

#endif
