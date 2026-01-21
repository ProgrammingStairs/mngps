/*
    Example showing the concept of do while loop
*/

#include<stdio.h>
int main(){
    /*
        int i=1;  // initialization
        do{
            if(i!=5)
                printf("statement executes | i : %d\n",i);
            i++; // increment
        }while(i <= 10); // condition
    */
        int i=1;  // initialization
        do{
            if(i!=3 && i!=7)
                printf("statement executes | i : %d\n",i);
            i++; // increment
        }while(i <= 10); // condition
    return 0;
}