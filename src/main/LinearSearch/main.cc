#include <iostream>
#include "src/lib/LinearSearch/LinearSearch.h"

int main(int argc, char** argv){
    LinearSearch *ls = new LinearSearch();
    std::cout << ls->getSearch() << std::endl;

    return EXIT_SUCCESS;

}
