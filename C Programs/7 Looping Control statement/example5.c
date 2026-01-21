// example to find out factorial of a number

#include<stdio.h>
int main(){
    int i,num,fact=1;
    printf("Enter number : ");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("\nFactorial : %d\n",fact);
    return 0;
}