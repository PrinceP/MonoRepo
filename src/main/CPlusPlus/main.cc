#include <iostream>
#include "src/lib/CPlusPlus/CPlusPlus.h"

int main(int argc, char** argv){
    CPlusPlus *greet = new CPlusPlus();
    std::cout << greet->getCPlusPlusMessage() << std::endl;

    std::cout << "Enter the number" << std::endl;
    int n;
    std::cin >> n; 
    
    /*
    int sum = 0;
    while(n){
      sum += n % 10;
      n = n / 10;
    }

    std::cout << "Sum of digits of " << n << " is " << sum << std::endl; 

    */

    /* ABCDEEDCBA */
    /* ABCDDCBA */
    /* ABCCBA */
    /* ABBA */
    /* AA */

    char letter = 'A';

    for(int i = 1; i <= n; i++)
    {
      for(int j = 1; j <= n-i+1; j++){
        std::cout << letter;
        letter = letter + 1;
      }
      
      for(int j = 1; j <= n-i+1; j++){
        letter = letter - 1;
        std::cout << letter;
      }
      std::cout << std::endl;
    }
    return EXIT_SUCCESS;
}
