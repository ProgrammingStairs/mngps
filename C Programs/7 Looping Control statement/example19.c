/*
    Example showing the concept of do while loop
*/

#include<stdio.h>
int main(){
    
    int i=1;  // initialization
    do{
        printf("statement executes | i : %d\n",i);
        i++; // increment
    }while(i <= 10); // condition

    return 0;
}