// program showing the concept of conditional operator

#include<stdio.h>
int main(){
    int a = 5, b = 3, c = 8;
    
    (a>b) ? ( a>c ? printf("%d is greater\n",a) : printf("%d is greater\n",c) ) : ( b>c ? printf("%d is greater\n",b) : printf("%d is greater\n",c) );

    return 0;
}