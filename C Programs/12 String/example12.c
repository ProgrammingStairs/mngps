// example showing the concept of string
// example to compare two strings
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
    printf("ch length : %d\n",len1);
    printf("chNew length : %d\n",len2);
    if(len1!=len2)
        printf("String not matched\n");
    else{
        for(i=0;i<len1;i++){
            if(ch[i]!=chNew[i])
                break;
        }
        if(i==len1)
            printf("String matched\n");
        else
            printf("String not matched...\n");
    }
    return 0;
}