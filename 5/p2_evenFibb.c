#include <stdio.h>
#include <stdlib.h>

int main(){

    int *storage = NULL;
    
    if ((int *)malloc(sizeof(int *)*4000000) != NULL){
        storage = (int *)malloc(sizeof(int *)*4000000);
    }
    else{
        printf("Unsuccessful allocation of memory. STOP\n");
        return 0;
    }
    

    //initalise first two fibonnaci numbers to the array
    *(storage) = 1;
    *(storage + 1) = 2;

    int i = 2; //starting from the next element in the fibonnaci array
    int count_even = 2; //initalise count even to 2 (includes the first 2 numbers of the fibb sequence)

    //check that the last fibonnaci number calculated does not exceed 4mil
    while ( *(storage+i-1) <= 4000000){

        *(storage+i) = *(storage+i-1) + *(storage+i-2);

        if ( *(storage+i)%2 == 0){
            count_even += *(storage+i);
        }

        i++; //increment i  
    }

    printf("The sum of even-valued fibonnaci numbers less than 4mill is: %d\n",count_even);
    free(storage);

    return 0;
}