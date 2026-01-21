// example showing the concept of string

#include<stdio.h>
int main(){
    char ch[100];
    // printf("Enter string : ");
    // scanf("%s",ch);

    printf("Enter string : ");
    scanf("%[^\n]s",ch);
    printf("\nString : %s\n",ch);
    return 0;
}