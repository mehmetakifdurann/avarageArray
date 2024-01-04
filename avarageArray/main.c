// This program takes 10 float inputs from the user and puts them in an Array. Then it calculates the avarage of that array.
// Created by Mehmet Akif Duran, 04 Jan 2024.

#include <stdio.h>
#include <stdlib.h>
#define N 10

int main(void){
    
    //Variable Declerations

    int counter;
    float avgArray[N];
    float total=0.0;
    float avarage;
    
    for(counter=0;counter<N;counter++){
        printf("Please enter the %d. number: ",counter+1);
        scanf("%f",&avgArray[counter]);
    }
    
    // Checking that our code is taking inputs into an array.
    
    /*
    for(counter=0;counter<N;counter++){
        printf("%d. number is : %.1f ",counter+1,avgArray[counter]);
    }
    */
    
    
    for(counter=0;counter<N;counter++){
        total += avgArray[counter];
    }
    
    avarage = total / N;
    
    printf("Your numbers avarage is %.2f\n", avarage);
    
    return 0;
}
