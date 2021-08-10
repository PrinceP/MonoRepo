#include <iostream>
#include "src/lib/MyBit/MyBit.h"


int getithBit(int n, int i){
    int mask = 1<<i;
    return (n&mask) > 0 ? 1 : 0;
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




    return EXIT_SUCCESS;

}
