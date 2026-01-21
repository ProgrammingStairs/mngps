// program showing the concept of conditional operator

#include<stdio.h>
int main(){
    int a = 5, b = 3;
    (a>b) ? printf("a is greater\n") : printf("b is greater\n");
    (a>b) ? printf("%d is greater\n",a) : printf("%d is greater\n",b);
    
    return 0;
}