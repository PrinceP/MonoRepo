#include <iostream>
#include "src/lib/Heap/Heap.h"

class Compare{

    public:
    bool operator()(int a, int b){
        return a<b; // Max heap and if > then min heap
    }

};

int maxProduct(std::vector<int> nums) {
    // your code goes here
    std::priority_queue<int> pq;
    
    for(int x: nums){
        pq.push(x);
    }
    int first = pq.top() - 1 ;
    pq.pop();
    int second = pq.top() - 1;
    return first*second;
    
}

//Car compare problem
class Car{

    std::string id;
    int x, y;
    public:
    Car(std::string id, int x, int y){
        this->id = id;
        this->x = x;
        this->y = y;
    }
    int getDist() const{
        return x*x + y*y;
    }
    std::string getId(){
        return id;
    }
};

class CarCompare{
    public:
    bool operator()(const Car A, const Car B){
       return A.getDist() < B.getDist();
    }
};

void printKNearCars(std::vector<Car> cars, int k){

    //Build a priority queue
    std::priority_queue<Car, std::vector<Car>, CarCompare> Carheap(cars.begin(), cars.begin() + k);

    //Adjust queue according to input
    for(int i = k; i < cars.size(); i++){
        auto car = cars[i];

        //Replace the heap top if small
        if(car.getDist() < Carheap.top().getDist()){
            Carheap.pop();
            Carheap.push(car);
        }
    }
    std::vector<Car> nearestCars;
    while(!Carheap.empty()){
        nearestCars.push_back(Carheap.top());
        Carheap.pop();
    }

    std::reverse(nearestCars.begin(), nearestCars.end());

    for(auto car: nearestCars){
        std::cout << car.getId() << std::endl;
    }

}

//

int main(int argc, char** argv){
    Heap *greet = new Heap();
    std::cout << greet->getHeapMessage() << std::endl;

    int arr[] = {23, 21,41, 52, 64, 74, 100};

    std::priority_queue<int, std::vector<int>, Compare > pque;
    for(int x: arr){
        pque.push(x);
    }
    while(!pque.empty()){
        std::cout << pque.top() << " ";
        pque.pop();
    }



    return EXIT_SUCCESS;

}
