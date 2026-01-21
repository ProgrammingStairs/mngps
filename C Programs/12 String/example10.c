// example showing the concept of string
// example to copy one string into another
#include<stdio.h>
int main(){
    char ch[100],chNew[100];
    printf("Enter string : ");
    scanf("%[^\n]s",ch);
    printf("\nString : %s\n",ch);
    int i,len=0;
    while(ch[len]!='\0'){
        len++;
    }
    for(i=0;i<len;i++){
        chNew[i] = ch[i];
    }
    chNew[i]='\0';
    printf("\nCopy String : %s\n",chNew);
    return 0;
}