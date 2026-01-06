#include <iostream>
#include "src/lib/Tries/Tries.h"

int main(int argc, char** argv){
    Tries *greet = new Tries();
    std::cout << greet->getTriesMessage() << std::endl;

    std::string words[] = {"hello","hel","ello","apple","news", "app", "appl"};

    Tries t;
    for(auto word:words){
        t.insert(word);
    }

    std::cout << t.search("hel") << std::endl;
    std::cout << t.search("hell") << std::endl;
    

    return EXIT_SUCCESS;

}
