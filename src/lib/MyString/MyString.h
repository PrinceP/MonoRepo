#ifndef TEMPLATE_GREETING_H
#define TEMPLATE_GREETING_H

#include <string>
#include <iostream>
#include <vector>
#include <cstring>

class MyString {
    public:
        int getMyStringCount(char testArray[]);
        std::string getMyStringRouteMessage(char testArray[]);
        std::string getcompress(std::vector<char>& str);
};

#endif
