// example to print table of a number

#include<stdio.h>
int main(){
    int i,num; // declare
    printf("Enter number : ");
    scanf("%d",&num);

    for(i=1;i<=10;i++){
        printf("%d x %d = %d\n",num,i,num*i);
    }
    return 0;
}