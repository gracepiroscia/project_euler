#include <stdio.h>
#include <stdlib.h>

#define MULTIPLE_ONE 3
#define MULTIPLE_TWO 5

int main(){

    int count = 0; //initalise count to 0

    int i;
    while (i < 1000){

        if (i%MULTIPLE_ONE == 0){
            count += i;
        }
        else if(i%MULTIPLE_TWO == 0){
            count += i;
        }

        i++;
    }

    printf("The sum of all the multiples of %d and %d below 1000 are: %d\n", MULTIPLE_ONE, MULTIPLE_TWO, count);

    return 0;
}