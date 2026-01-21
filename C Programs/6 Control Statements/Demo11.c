// example showing the concept of nested if else statement 

#include<stdio.h>
int main(){
    int age;
    char ch;
    printf("Enter Nationality(i/I) for Indian : ");
    scanf("%c",&ch);

    if(ch=='i' || ch=='I'){
        printf("Enter age : ");
        scanf("%d",&age);
        if(age>=18)
            printf("Eligible to vote\n");
        else
            printf("Not Eligible to vote\n");
    }else{
        printf("Not an Indian\n");
    }
    return 0;
}