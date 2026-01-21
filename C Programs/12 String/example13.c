// example showing the concept of string handling function
#include<stdio.h>
#include<string.h>
int main(){
   char ch[]="ANDREW",chNew[]="ANDREW",chAgain[]="Hello User",ch1[500];
   char ch2[]="abc",ch3[]="xyz";
   printf("Length of string : %d\n",strlen(chAgain)); 
   printf("Uppercase : %s\n",strupr(chNew));
   printf("Lowercase : %s\n",strlwr(ch));
   printf("Copy : %s\n",strcpy(ch1,chAgain));
   printf("Reverse : %s\n",strrev(ch1));
   printf("Compare : %d\n",strcmp(ch2,ch3));
   printf("Concat : %s\n",strcat(ch2,ch3)); 
   return 0;
}