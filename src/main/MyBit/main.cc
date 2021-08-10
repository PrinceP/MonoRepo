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
    int mask = (-1<<i);
    n = n&mask;
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

    return EXIT_SUCCESS;

}
