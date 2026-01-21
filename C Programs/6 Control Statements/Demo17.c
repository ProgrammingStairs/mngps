// example showing the concept of switch control statement
#include<stdio.h>
int main(){
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    switch(num){
        case 0 : 
            printf("statement 1\n");
            break;
        case 1 : 
            printf("statement 2\n");
            break;
        case 2 : 
            printf("statement 3\n");
            break;
        default : 
            printf("Invalid\n");
            break;
    }
    return 0;
}