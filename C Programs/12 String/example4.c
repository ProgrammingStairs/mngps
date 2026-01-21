// example showing the concept of string

#include<stdio.h>
int main(){
    int age;
    char name[100];
    printf("Enter age : ");
    scanf("%d",&age);
    
    getchar();
    
    printf("Enter name : ");
    scanf("%[^\n]s",name);
    
    printf("\nName : %s\n",name);
    printf("\nAge : %d\n",age);
    return 0;
}