#ifndef TEMPLATE_GREETING_H
#define TEMPLATE_GREETING_H

#include <string>
#include <iostream>
template<typename T> 
class Node{
    public:
    std::string key;
    T value;
    Node* next;
    Node(std::string key, T value){
        this->key = key;
        this->value = value;
        next = NULL;
    }
    ~Node(){
        if(next != NULL)
            delete next;
    }
};

template<typename T>
class Hashing {

    Node<T> ** table;
    int cs;
    int ts;

    void rehash(){
        //save old ptr to table
        Node<T> **oldTable = table;
        int oldTs = ts;

        //increase the size and intialize 
        ts = 2*ts + 1;
        cs = 0;
        table = new Node<T> *[ts];
        for(int i = 0; i < ts; i++){
             table[i] = NULL;
        }
        
        //copy all elements to new table
        for(int i = 0; i < oldTs; i++){

            Node<T> *temp = oldTable[i];
            while(temp!=NULL){
                std::string key = temp->key;
                T value = temp->value;

                //insert at new table 
                insert(key, value);
                temp=temp->next;
            }

            //destroy old table
            if(oldTable[i] != NULL){
                delete oldTable[i];
            }
        }

        delete[] oldTable;


    }

    public:

        int hashFn(std::string key){

            int idx = 0;
            int power = 1;
            for(auto ch: key){
                idx = (idx  + ch*power)%ts ;
                power = (power * 29) %ts;
            }
            return idx;
        }

        Hashing(int default_size = 5){
            cs = 0;
            ts = default_size;
            table = new Node<T> *[ts];

            for(int i = 0; i < ts; i++){
                table[i] = NULL;
            } 
        }

        void insert(std::string key, T val){
            int idx = hashFn(key);
            Node<T> *n = new Node<T>(key, val);

            n->next = table[idx];
            table[idx] = n;
            cs++;  
            float load_factor = cs/(float)ts;
            if(load_factor > 0.7){
                rehash();
            }
        }

        std::string getHashingMessage(){
            return "Hello World!";
        }

        void print(){
            for(int i = 0; i<ts; i++){
                std::cout << "Bucket "<<i<<std::endl;
                Node<T> *temp = table[i];
                while(temp != NULL){
                    std::cout << temp->key << "->";
                    temp = temp->next;
                }
                std::cout << std::endl;
            }
        }
};

#endif
