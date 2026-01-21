/*
    Example to check whether entered number is palindrome or not
*/

#include<stdio.h>
int main(){
    int num,rem,rev=0,temp; 
    
    printf("Enter number : ");
    scanf("%d",&num);
    temp = num;

    while(num > 0){ // condition
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num/10;
    }
    if(rev == temp)
        printf("Number is palindrome\n");
    else
        printf("Number is not palindrome\n");
    return 0;
}