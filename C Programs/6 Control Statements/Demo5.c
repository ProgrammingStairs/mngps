// example showing the concept of if statement 

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter values of a and b : ");
    scanf("%d%d",&a,&b);

    if(a>b)
        printf("%d is greater\n",a);

    if(a<b)
        printf("%d is greater\n",b);

    if(a==b)
        printf("Both are equal\n");

    return 0;
}