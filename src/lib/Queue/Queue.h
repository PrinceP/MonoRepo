#ifndef TEMPLATE_GREETING_H
#define TEMPLATE_GREETING_H

#include <string>
#include <queue>
#include <stack>

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

 class StackUsingQueue{
    std::queue<int> q1;
    std::queue<int> q2;

public:

    bool empty(){
        return q1.empty() && q2.empty();
    }
    void push(int data){
        if(!q1.empty()){
            q1.push(data);
        }else{
            q2.push(data);
        }
    }

    void pop(){
        if(q1.empty()){
            while(!q2.empty()){
                int front = q2.front();
                q2.pop();

                if(q2.empty()){
                    break;
                }
                q1.push(front);
            }
        }else{
            while(!q1.empty()){
                int front = q1.front();
                q1.pop();

                if(q1.empty()){
                    break;
                }
                q2.push(front);
            }
        }
    }

    int top(){
        if(q1.empty()){
            while(!q2.empty()){
                int front = q2.front();
                q2.pop();
                q1.push(front);
                if(q2.empty()){
                    return front;
                }
            }
        }else{
            while(!q1.empty()){
                int front = q1.front();
                q1.pop();
                q2.push(front);
                if(q1.empty()){
                    return front;
                }
            }
        }
        return -1;
    }

 };

#endif
