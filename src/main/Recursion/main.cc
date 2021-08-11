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


//Generate strings of "01"
// Function to print the output
std::string printTheArray(int arr[], int n)
{
    std::string one_str = ""; 
    for (int i = 0; i < n; i++) {
        one_str += std::to_string(arr[i]);
    }
    return one_str;
}
 
// Function to generate all binary strings
void generateAllBinaryStrings(int n, int arr[], int i, std::vector<std::string> &res)
{
    if (i == n) {
        res.push_back(printTheArray(arr, n));
        return;
    }
 
    arr[i] = 0;
    generateAllBinaryStrings(n, arr, i + 1, res);
 
    arr[i] = 1;
    generateAllBinaryStrings(n, arr, i + 1, res);
}

// Function to print all n–digit binary strings without any consecutive 1's
void countStrings(int n, std::string out, int last_digit, std::vector<std::string> &res)
{
    // if the number becomes n–digit, print it
    if (n == 0)
    {
        // cout << out << endl;
        res.push_back(out);
        return;
    }
 
    // append 0 to the result and recur with one less digit
    countStrings(n - 1, out + "0", 0, res);
 
    // append 1 to the result and recur with one less digit
    // only if the last digit is 0
    if (last_digit == 0) {
        countStrings(n - 1, out + "1", 1, res);
    }
}
//Count Friends
int countFriendsPairings(std::vector<int> dp, int n)
{
    if (dp[n] != -1)
        return dp[n];
 
    if (n > 2)
        return dp[n] = countFriendsPairings(dp, n - 1) + (n - 1) * countFriendsPairings(dp, n - 2);
    else
        return dp[n] = n;
}


int friendsPairing(int n){   
    std::vector<int> v(10000,-1);
    return countFriendsPairings(v,n);
}

std::vector<std::string> binaryStrings(int n){    
    // int arr[n];
    // vector<string> res;
    // generateAllBinaryStrings(n, arr, 0, res);
    
    std::vector<std::string> res;
    std::string out = "";
    countStrings(n, out, 0, res);   
    return res;
}





int main(int argc, char** argv){
    Recursion *greet = new Recursion();
    std::cout << greet->getRecursionMessage() << std::endl;

    int a,n;
    std::cin>>a >> n;
    std::cout << "Power of a to n " << fastPower(a,n) << std::endl;     

    return EXIT_SUCCESS;

}
