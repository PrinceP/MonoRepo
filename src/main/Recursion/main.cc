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


int fastPower(int a, int n){
    if(n == 0){
        return 1;
    }
    int subprob = fastPower(a, n/2);
    int subprobsq = subprob * subprob;
    if(n & 1){
        return subprobsq * a;
    }else{
        return subprobsq;
    }
}


//Tiling prob
int getNoOfWays(int n, int m)
{
    // Base case
    if (n == 0)
        return 0;
    if(n<m){
        if(1 <= n)
          return 1;  
    }
    if(n==m){
        return 2;
    }
    if(m < n){
        return getNoOfWays(n-1, m) + getNoOfWays(n-m, m);
    }
    return 0;
}
int tillingProblem(int n, int m){   
    return getNoOfWays(n,m);
}

int main(int argc, char** argv){
    Recursion *greet = new Recursion();
    std::cout << greet->getRecursionMessage() << std::endl;

    int a,n;
    std::cin>>a >> n;
    std::cout << "Power of a to n " << fastPower(a,n) << std::endl;     

    return EXIT_SUCCESS;

}
