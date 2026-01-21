// program showing the concept of shorthand operator | arithmetic assignment operator | compound operator

#include<stdio.h>
int main(){
    int a = 5, b = 30;
    a  += 100;  // a = a + 100;
    printf("a : %d\n",a);   

    b /= 3;
    printf("b : %d\n",b);   

    return 0;
}