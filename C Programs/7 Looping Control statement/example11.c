/*
    1/1     1/2    1/3     1/4    .......
*/

#include<stdio.h>
int main(){
    int i,num;
    printf("Enter number : ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
       printf("1/%d\t",i);
    
    return 0;
}