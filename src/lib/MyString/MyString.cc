#include "MyString.h"



std::string MyString::getMyStringRouteMessage(char testArray[]){

	int x = 0;
	int y = 0;

	for(int i = 0; i<strlen(testArray); i++){
		switch (testArray[i])
		{
			case 'N':
				x++;
				break;
			case 'S':
				x--;
				break;
			case 'E':
				y++;
				break;
			case 'W':
				y--;
				break;	
			default:
				break;
		};
	}

	std::string res;
	if(x > 0 && y > 0){
		while(x--){
			res = res + 'N';
		}
		while(y--){
			res = res + 'E';
		}
	}
	return res;
}

int MyString::getMyStringCount(char testArray[]){
	
	int number_of_space = 0;

	for(int i = 0; i<strlen(testArray); i++){
		if(testArray[i] == ' '){
			number_of_space++;
		}
	}

	return number_of_space;
}

bool isPalindrome(std::string str)
{
    int n = str.size();
    int i,j;
    
    for(i=0,j=n-1; i<=j ; i++,j-- ){
        if(str[i] != str[j]){
            return false;
        }
    }
    return true;
}