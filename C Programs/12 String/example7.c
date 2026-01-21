// example showing the concept of string
// example to convert string from upper case to lower case
#include<stdio.h>
void lowerCase(char ch[]){
    int len=0;
    while(ch[len]!='\0'){
        len++;
    }
    printf("\nLength of string : %d\n",len);
    for(int i=0;i<len;i++){
        if(ch[i]>=65 && ch[i]<=90)
            ch[i] = ch[i]+32;
    }
    printf("\nString in lower case : %s\n",ch);
}
int main(){
    char ch[100];
    printf("Enter string : ");
    scanf("%[^\n]s",ch);
    
    printf("\nString : %s\n",ch);
    lowerCase(ch);
    return 0;
}