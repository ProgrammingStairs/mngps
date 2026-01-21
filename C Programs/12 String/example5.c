// example showing the concept of string
// example to find out length of string
#include<stdio.h>
int main(){
    char ch[100];
    printf("Enter string : ");
    scanf("%[^\n]s",ch);
    
    printf("\nString : %s\n",ch);
    int len=0;
    while(ch[len]!='\0'){
        len++;
    }
    printf("\nLength of string : %d\n",len);
    return 0;
}