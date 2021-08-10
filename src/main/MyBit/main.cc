#include <iostream>
#include "src/lib/MyBit/MyBit.h"

//10101
//00001 << i
//00100 &
//00100
int getithBit(int n, int i){
    int mask = 1<<i;
    return (n&mask) > 0 ? 1 : 0;
}

//10101
//00001 << i
//00100 ~
//11011 &
//10001
void clearithBit(int &n, int i){
    int mask = ~(1<<i);
    n = n&mask;
}

//10101
//00001 << i
//00100 |
//10101
void setithBit(int &n, int i){
    int mask = (1<<i);
    n = n|mask;
}

//10101
//10_01
//00v00 &
//10v01
void updateithBit(int &n, int i, int v){
    clearithBit(n, i);
    int mask = (v<<i);
    n = n|mask;
}

//10101
//11111 << i
//11000 &
//10000
void clearlastithBit(int &n, int i){
    int mask = (-1<<(i+1));
    n = n&mask;
}

//10101
//11111 << j+1
//11000 a
//00100 (1<<i) - 1
//00011
//11011 a | b
//10001 &

void clearBitinRange(int &n, int i, int j){
    int a = (-1<<(j+1));
    int b = (1<<i) - 1;
    int mask = a | b;

    n = n&mask;
}

//10101
//11111 << j+1
//11000 a
//00100 (1<<i) - 1
//00011
//11011 a | b
//10001 &
//Replace

void replaceBitinRange(int &n, int i, int j, int m){
    clearBitinRange(n, i, j);
    int mask = m << i;
    n = n | mask;
}

int countBits(int n){
    int sum = 0;
    while(n>0){
        int x = n & 1;
        sum += x;
        n = n >> 1;
    }
    return sum;
}

int countfastBits(int n){
    int sum = 0;
    while(n>0){
        sum += 1;
        n = n & n-1;
    }
    return sum;
}

int converttoBinary(int n){
    int result = 0;
    int p = 1;

    while(n>0){
        int last_bit = n & 1;
        result += p * last_bit; 
        p = p * 10;
        n = n >> 1;
    }
    return result;
}

//XORing for a non duplicate 
int xoring(std::vector<int> v)
{
    // your code goes here
    int ans = 0;
    for(int i: v){
        ans = ans ^ i;
    }   
    return ans;
}
//Division 
int power(int x, int y, int mod)
{ 
    int res = 1;     // Initialize result
    x = x % mod; 
    if (x == 0) return 0; // In case x is divisible by p;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % mod;
        
        y = y>>1; // y = y/2
        x = (x*x) % mod;
    }
    return res;
}

std::vector<bool> processQueries(std::vector<int> query, int N, std::bitset<10000> bit){
    std::vector<bool> v;
    for(int q: query){
        if(bit[q]){ v.push_back(true); }
        else{
            v.push_back(false);
        }
    }
    return v;
}
void preprocess(std::bitset<10000> &bit, std::vector<int> arr){
    
    bit.reset();
    bit[0] = 1;
        
    for(int i = 0; i < arr.size(); i++){
        bit |= (bit << arr[i]);
    }
}
std::vector<bool> subsetSum(std::vector<int> arr, std::vector<int> query)
{
    int N = query.size();
    std::bitset<10000> bit;
    preprocess(bit, arr);
    return processQueries(query, N,  bit);
}

int main(int argc, char** argv){
    MyBit *greet = new MyBit();
    std::cout << greet->getMyBitMessage() << std::endl;


    int n;
    std::cin>>n;

    if(n&1){
        std::cout << "Odd number" << std::endl;
    }else{
        std::cout << "Even number" << std::endl;
    }

    int i;
    std::cin >> i;

    //Get ith bit
    std::cout << "ith bit = " << getithBit(n,i) << std::endl;

    clearithBit(n,i);
    std::cout << "Cleared ith bit = " << getithBit(n,i) << std::endl;

    setithBit(n,i);
    std::cout << "Set ith bit = " << getithBit(n,i) << std::endl;

    int v;
    std::cin>>v;
    updateithBit(n,i,v);
    std::cout << "Update ith bit = " << getithBit(n,i) << std::endl;

    clearlastithBit(n,i);
    std::cout << "Clear last i bits = " << getithBit(n,i) << std::endl;

    int j = i + 2;
    clearBitinRange(n,i,j);
    std::cout << "Clear i bit = " << getithBit(n,i) << std::endl;
    std::cout << "Clear j bit = " << getithBit(n,j) << std::endl;

    replaceBitinRange(n,i,j,2);
    std::cout << "Number = " << n << std::endl;

    if( (n&(n-1)) == 0){
        std::cout << "Number is power of 2 = " << n << std::endl;
    }else{
        std::cout << "Number is not a power of 2 = " << n << std::endl;
    }

    std::cout << "Bits set in the number = " << countBits(n) << std::endl;
    std::cout << "Bits set fast in the number = " << countfastBits(n) << std::endl;

    std::cout << "In binary = " << converttoBinary(n) << std::endl; 

    return EXIT_SUCCESS;

}
