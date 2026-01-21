// example showing the concept of string
// example to check whether entered string is palindrome or not
#include<stdio.h>
int main(){
    char ch[100];
    printf("Enter string : ");
    scanf("%[^\n]s",ch);
    printf("\nString : %s\n",ch);
    int i,len=0;
    char temp;
    while(ch[len]!='\0'){
        len++;
    }
    for(i=0;i<len/2;i++){
        if(ch[i] != ch[len-1-i])
            break;
    }
    if(i==len/2)
        printf("\nString is palindrome\n");
    else
        printf("\nString is not Palindrome\n");
    return 0;
}