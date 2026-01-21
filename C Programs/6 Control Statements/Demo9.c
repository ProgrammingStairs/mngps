// example showing the concept of if else statement 

#include<stdio.h>
int main(){
    int a;
    printf("Enter number : ");
    scanf("%d",&a);

    if(a%2==0)
        printf("Even Number\n");
    else
        printf("Odd Number\n");

    return 0;
}