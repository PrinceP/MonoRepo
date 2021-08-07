#include "MyString.h"



std::string MyString::getMyStringRouteMessage(char testArray[]){

	 return "NNE";
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