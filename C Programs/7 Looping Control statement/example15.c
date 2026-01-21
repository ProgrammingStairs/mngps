/*
    Example to reverse a number
*/

#include<stdio.h>
int main(){
    int num,rem,rev=0; 
    
    printf("Enter number : ");
    scanf("%d",&num);

    while(num>0){ // condition
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num/10;
    }
    printf("Reverse Number : %d\n",rev);
    return 0;
}