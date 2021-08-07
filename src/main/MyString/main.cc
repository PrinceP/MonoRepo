#include <iostream>
#include "src/lib/MyString/MyString.h"

int main(int argc, char** argv){
    char testArray[1000];
	std::cin.getline(testArray, 1000);

    MyString *out = new MyString();
    std::string actual = out->getMyStringRouteMessage(testArray);
	int actual1 = out->getMyStringCount(testArray);

    std::cout << actual1 << std::endl;
    
    std::cout << actual << std::endl;
    
    return EXIT_SUCCESS;

}
