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

    return EXIT_SUCCESS;

}
