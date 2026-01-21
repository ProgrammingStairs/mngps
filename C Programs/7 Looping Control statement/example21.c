/*
    Example showing the concept of do while loop
*/

#include<stdio.h>
int main(){
        int num,sum=0;  // initialization
        char ch;
        do{
            printf("Enter number : ");
            scanf("%d",&num);
            getchar();    
            sum = sum + num;

            printf("Do you want to continue ?\nIf yes Press y/Y : ");
            scanf("%c",&ch);

        }while(ch=='y' || ch=='Y'); // condition
    
        printf("\nsum : %d\n",sum);
        return 0;
}