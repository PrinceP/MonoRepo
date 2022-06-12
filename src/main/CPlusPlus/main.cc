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

    /*   1 */
    /*  232 */
    /* 34543 */
    /*4567654 */


    int number = 1;
    for(int i = 1; i <= n; i++){
      number = i; 
      for(int j = 1; j <= n - i; j++){
        std::cout << " ";
      }

      for(int k = 1; k <= i; k++){
        std::cout << number;
        number = number + 1;
      }
      
      int start_number = number - 2;
      for(int l = 1; l <= i-1; l++){
        std::cout << start_number;
        start_number = start_number - 1;
      }

      std::cout << std::endl;
    }

    int ans = 0;    
    int N = n;
    int p = 1;
    while(N != 0){
      int last_digit = N % 10;
      ans = ans + last_digit*p;
      N = N / 10;
      p = p * 2;
    }
    std::cout << "Binary to decimal = " << ans;

    return EXIT_SUCCESS;
}
