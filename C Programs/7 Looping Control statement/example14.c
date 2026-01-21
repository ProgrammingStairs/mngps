/*
    Example to count number of digits
*/

#include<stdio.h>
int main(){
    int count=0; // initialization
    int num; // declaration
    
    printf("Enter number : ");
    scanf("%d",&num);

    while(num>0){ // condition
        count++;
        num = num/10;
    }
    printf("Number of digits : %d\n",count);
    printf("Number : %d\n",num);
    return 0;
}