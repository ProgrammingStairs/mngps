// example to print even number series

#include<stdio.h>
int main(){
    int i,num;
    printf("Enter number : ");
    scanf("%d",&num);

    // n even numbers
    /*
        for(i=1;i<=num;i++){
            printf("%d\t",2*i);
        }
    */
    
    // even numbers upto n
        for(i=1;i<=num/2;i++){
            printf("%d\t",2*i);
        }
    
    return 0;
}