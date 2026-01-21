// example showing the concept of nested if else statement 
#include<stdio.h>
int main(){
    char ch;
    printf("Enter character : ");
    scanf("%c",&ch);

    if(ch>=65 && ch<=90)
        printf("Character is in uppercase\n");
    else{
        if(ch>=97 && ch<=122)
            printf("Character is in lowercase\n");
        else{
            if(ch>=48 && ch<=57)
                printf("Character is a digit\n");
            else
                printf("Invalid\n");
        }
    }
    return 0;
}