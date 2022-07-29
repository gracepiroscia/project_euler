//A palindromic number reads the same both ways. 
//The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

// Find the largest palindrome made from the product of two 3-digit numbers.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPalindrome(int number); 
int ReverseInt(int number);
 
int main(){

    int first = 100; //first possible 3 digit number
    int last = 999; //last possible 3 digit number 
    int currentmax = 0;
    int num1 = 0;
    int num2 = 0;

    // //working from largest to smallest ensures the larges palindrome is found first
    for (int ii = last; ii > (first -1); ii--){

        for (int jj = last; jj > (first - 1); jj--){
            int product = jj*ii; 
            if (isPalindrome(product)){
                if (product > currentmax){
                    currentmax = product; // reassign current maximum
                    num1= jj;
                    num2 = ii;
                }
            }
        }

    }
    printf("Largest Palindrome Found!!: %d x %d = %d\n", num1, num2, currentmax);
    return 0; 
}

int isPalindrome(int number){

    int difference = number - ReverseInt(number);
 
    if (difference == 0){
        return 1; 
    }
    else{
        return 0;
    }


}

int ReverseInt(int number){

    int r = 0;

    while(number != 0){

        r = r * 10;
        r = r + number%10;
        number = number/10;

    }

    return r;

}