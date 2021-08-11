#include <iostream>
#include "src/lib/Recursion/Recursion.h"

//Recursive add increasing numbers 
int inc(int N, std::vector<int> &res ){
    
    if(N > 0)
    {
        inc(N - 1, res);
        res.push_back(N);
    }
    return 0 ;
}

//Occurances

int findall(int k, int n, std::vector<int> v, std::vector<int> &res ){
    if(n < v.size())
    {
        if(v[n] == k){
            res.push_back(n);
        }
        findall(k, n+1, v, res);
    }
    return 0 ;
}


std::vector<int> findAllOccurences(int k, std::vector<int> v){
    std::vector<int> res;
    findall(k, 0, v, res );
    return res;   
}

int main(int argc, char** argv){
    Recursion *greet = new Recursion();
    std::cout << greet->getRecursionMessage() << std::endl;

    

    return EXIT_SUCCESS;

}
