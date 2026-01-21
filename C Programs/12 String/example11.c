// example showing the concept of string
// example to concat two string | example to merge two string | example to join two strings
#include<stdio.h>
int main(){
    char ch[100],chNew[100];
    printf("Enter first string : ");
    scanf("%[^\n]s",ch);
    getchar();
    printf("Enter second string : ");
    scanf("%[^\n]s",chNew);
    
    printf("\nFirst String : %s\n",ch);
    printf("\nSecond String : %s\n",chNew);

    int i,len1=0,len2=0;
    while(ch[len1]!='\0'){
        len1++;
    }
    while(chNew[len2]!='\0'){
        len2++;
    }
    ch[len1] = ' ';
    len1++;
    for(i=0;i<len2;i++,len1++){
        ch[len1] = chNew[i];
    }
    ch[len1]='\0';
    printf("\nConcat String : %s\n",ch);
    return 0;
}