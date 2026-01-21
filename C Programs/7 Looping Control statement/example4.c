// example to find out sum of n natural numbers

#include<stdio.h>
int main(){
    int i,num,sum=0; // declare
    printf("Enter number : ");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        sum=sum+i;
    }
    printf("\nSum : %d\n",sum);
    return 0;
}