#include <iostream>
#include "src/lib/MyString/MyString.h"

int main(int argc, char** argv){
    char testArray[1000];
	std::cin.getline(testArray, 1000);
    std::cout<<testArray<<std::endl;
    return EXIT_SUCCESS;

}
