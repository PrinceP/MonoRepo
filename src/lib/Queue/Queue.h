#ifndef TEMPLATE_GREETING_H
#define TEMPLATE_GREETING_H

#include <string>

class Queue {

    int *arr;
    int cs;
    int ms;
    int front, rear;

    
    public:
        std::string getQueueMessage();

        Queue(int defaultsize = 5){
            ms = defaultsize;
            cs = 0;
            front = 0;
            rear = ms - 1;
            arr = new int[ms];
        }

        bool full(){
            return cs == ms;
        }

        void push(int data){
            if(!full()){
                rear = (rear + 1)%ms;
                arr[rear] = data;
                cs++;
            }
        }

        bool empty(){
            return cs==0;
        }

        void pop(){
            if(!empty()){
                front = (front + 1)%ms;
                cs--;
            }
        }

        int getfront(){
            return arr[front];
        }




};

#endif
