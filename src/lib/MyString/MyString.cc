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


bool MyString::arePermutation(std::string A, std::string B)
{
    // your code goes here
    int char_dict[255] = {0};
    
    for(int i = 0; i < A.size(); i++){
        char_dict[A[i] - 'a']++;
    }
    for(int i = 0; i < B.size(); i++){
        char_dict[B[i] - 'a']--;
    }
    
    for(int i = 0 ; i < 255; i++){
		if(char_dict[i] != 0){
            return false;
        }
    }
    return true;
}

std::string removeDuplicate(std::string s){
    // your code goes here
    int char_dict[255] = {0};
    std::string output;
    
    for(int i = 0; i < s.size(); i++){
        char_dict[s[i] - 'a']++;
    }
    for(int i = 0 ; i < 255; i++){
		if(char_dict[i] != 0){
		    int x = 'a' + i;
		    char xx = x;
            output += xx;
        }
    }
    return output;
}

std::string MyString::getcompress(std::vector<char>& str) {
    // your code goes here
   std::string output = "";    
   int n = str.size();
   for (int i = 0; i < n; i++) {
 
        // Count occurrences of current character
        int count = 1;
        while (i < n - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }
 
        // Print character and its count
		if(count == 1){
			output = output + str[i];	
		}else{
			output = output + str[i]; 
        	output = output + std::to_string(count);
		}
            
    }
	return output;
}