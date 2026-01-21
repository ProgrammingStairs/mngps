// example showing the concept of function 
// with argument with return type

#include<stdio.h>

// function definition
int reverse(int num){
    int rem,rev=0;
    while(num>0){
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    return rev;
}

int main(){
    printf("Reverse Number : %d\n",reverse(123));
    return 0;
}

