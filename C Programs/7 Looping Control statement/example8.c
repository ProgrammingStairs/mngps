// example to print fibonacci series

#include<stdio.h>
int main(){
    int i,num,a=-1,b=1,c;
    printf("Enter number : ");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        c = a + b;
        printf("%d\t",c);
            a = b;
            b = c;
    }
    return 0;
}