// example showing the concept of string
// example to reverse string
#include<stdio.h>
int main(){
    char ch[100];
    printf("Enter string : ");
    scanf("%[^\n]s",ch);
    printf("\nString : %s\n",ch);
    int len=0;
    char temp;
    while(ch[len]!='\0'){
        len++;
    }
    for(int i=0;i<len/2;i++){
        temp = ch[i];
        ch[i] = ch[len-1-i];
        ch[len-1-i] = temp;
    }
    printf("\nReverse String : %s\n",ch);
    return 0;
}