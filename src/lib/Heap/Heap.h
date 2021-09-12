#ifndef TEMPLATE_GREETING_H
#define TEMPLATE_GREETING_H

#include <string>
#include <vector>
#include <queue>
#include <algorithm>
class Heap {

    std::vector<int> heap_vec;

    void heapify(int i){
        int left = 2*i;
        int right = 2*i + 1;

        int minidx = i;
        if(left < heap_vec.size() and heap_vec[left] < heap_vec[i] ){
            minidx = left;
        }
        if(right < heap_vec.size() and heap_vec[right] < heap_vec[minidx] ){
            minidx = right;
        }

        if(minidx != i){
            std::swap(heap_vec[i], heap_vec[minidx]);
            heapify(minidx);
        }
        
    }
    public:
        Heap(int initial_capacity = 10){
            heap_vec.reserve(initial_capacity+1);
            heap_vec.push_back(-1);
        }

        void insert(int data){
            heap_vec.push_back(data);

            int idx = heap_vec.size() - 1;
            int parent = idx / 2;

            while (idx > 1 and heap_vec[idx] < heap_vec[parent])
            {
                std::swap(heap_vec[idx], heap_vec[parent]);
                idx = parent;
                parent = parent / 2;
            }
            
        }

        int top(){
            return heap_vec[1];
        }

        void pop(){

            //Swap first and last
            //Delete last
            //Heapify at 1.

            int idx = heap_vec.size() - 1;
            std::swap(heap_vec[idx], heap_vec[1]);

            heap_vec.pop_back();
            heapify(1);

        }
        
        bool isempty(){
            return heap_vec.size() == 1;
        }
        std::string getHeapMessage();
};

#endif
