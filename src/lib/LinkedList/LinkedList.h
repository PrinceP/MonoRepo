#ifndef TEMPLATE_GREETING_H
#define TEMPLATE_GREETING_H

#include <string>
#include <iostream>

class Node {
    int data;

    public:
        Node* next;
        Node(int d):data(d),next(NULL){}

        int getData(){
            return data;
        }
};


class LinkedList {

    Node* head;
    Node* tail;

    public:
        LinkedList():head(NULL),tail(NULL){}

        std::string getLinkedListMessage();
        
        void printLinkedList(){
            while(head){
                std::cout << head->getData()<<" ";
                head = head->next;
            }
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


};

#endif
