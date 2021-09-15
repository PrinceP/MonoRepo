#ifndef TEMPLATE_GREETING_H
#define TEMPLATE_GREETING_H

#include <string>

template<typename T> 
class Node{
    public:
    std::string key;
    T data;
    Node* next;
    Node(std::string key, T value){
        this->key = key;
        this->value = value;
        next = NULL;
    }
};

template<typename T>
class Hashing {

    Node<T> ** table;
    int cs;
    int ts;

    void rehash(){

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

        Hashing(int default_size = 10){
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
};

#endif
