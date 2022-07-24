#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_prime(int num);

int main(){

    int return_out = 0;
    int i = 2;

    while (return_out == 0){

        // if the current number is ODD and COMPOSITE (ie not prime)
        if ( i%2 != 0 && is_prime(i) == 0){

            int num = i;
            int j = 1; //setting base of power to 1
            int k = 0; //set to an arbitrary non-prime to initalise

            while (is_prime(k) == 0){
                k = num - 2*pow(j,2);

                if (num - 2*pow(j,2) < 0){
                    printf("STOP: golbach's conjecture breaks down at number %d\n",num);
                    return_out = 1;
                    break;
                }
                else{
                    j++; //increment base value
                }
            }
        }

        i++; //increment number

    }

    return 0;
}

int is_prime(int num){

    //0 1 or a negative integer cannot be prime by definition
    if (num == 0 || num == 1 || num < 0){
        return 0;
    }
    //if the number is even we can automatically assume it is not prime
    else if (num%2 == 0){
        return 0;
    }
    else{

        int divide_by = (num-1)/2;
        for (int i = divide_by; i > 1; i--){

            if (num%i == 0){
                return 0;
            }
        }
    }

    return 1; //if none of the statements above have been met then we can assume the number IS prime
}
