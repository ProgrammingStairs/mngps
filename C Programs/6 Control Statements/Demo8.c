// example showing the concept of if else statement 

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);

    if(a%b==0)
        printf("First no. is divisible by second\n");
    else
        printf("not divisible\n");

    return 0;
}