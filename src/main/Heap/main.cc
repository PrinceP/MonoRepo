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

// Min set size
int minSetSize(std::vector<int>& arr) {
    // your code goes here
    //Mapping each freq
    std::unordered_map<int, int> countOfElements;
    for(int i = 0; i < arr.size(); i++){
        countOfElements[arr[i]]++;
    }
    //Build a priority queue
    std::priority_queue<int> topMax;

    for(auto element: countOfElements){
        topMax.push(element.second);
    }

    //Pop from queue and maintain count
    int count = 0;
    int sum = 0;

    while(arr.size() - sum > (arr.size()/2)){
        count++;

        sum+= topMax.top();
        topMax.pop();
    }

    return count;
}

//



//kWeakestRows
std::vector<int> kWeakestRows(std::vector<std::vector<int>>& mat, int k) {
    // your code goes here 

    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater< std::pair<int, int> >> pqueue;
    //greater<type> -> minHeap

    for(int i = 0; i<mat.size(); i++){
        int soldiers = 0;
        for(int j = 0 ; j<mat[i].size(); j++){
            soldiers+= mat[i][j];
        }
        pqueue.push(std::make_pair(soldiers, i));
    }

    std::vector<int> result_vec;

    while(k>0){
        k--;
        std::pair<int, int> temp = pqueue.top();
        result_vec.push_back(temp.second);
        pqueue.pop();
    }

    return result_vec;
}

//


//ScoreMedal
std::vector<std::string> findRelativeRanks(std::vector<int>& score) {
    // your code goes here
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::less< std::pair<int,int> > > scores;
    for(int i = 0; i < score.size(); i++){
        scores.push(std::make_pair(score[i], i));
    }

    std::vector<std::string> result(score.size());
    
    int i = 1;
    while(!scores.empty()){

        std::pair<int, int> currentScore= scores.top();


        if(i == 1){
            result[currentScore.second] = "Gold Medal";
        }
        else if(i == 2){
            result[currentScore.second] = "Silver Medal";
        }
        else if(i == 3){
            result[currentScore.second] = "Bronze Medal";
        }
        else{
            result[currentScore.second] = std::to_string(i);
        }

        i++;
        scores.pop();
    }
    return result;
    
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
