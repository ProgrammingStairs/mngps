// example showing the concept of string
// example to convert string from lower case to upper case
#include<stdio.h>
void upperCase(char ch[]){
    int len=0;
    while(ch[len]!='\0'){
        len++;
    }
    printf("\nLength of string : %d\n",len);
    for(int i=0;i<len;i++){
        if(ch[i]>=97 && ch[i]<=122)
            ch[i] = ch[i]-32;
    }
    printf("\nString in upper case : %s\n",ch);
}
int main(){
    char ch[100];
    printf("Enter string : ");
    scanf("%[^\n]s",ch);
    
    printf("\nString : %s\n",ch);
    upperCase(ch);
    return 0;
}