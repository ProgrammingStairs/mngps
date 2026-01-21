// program showing the concept of arithmetic operators

#include<stdio.h>
int main(){
    int a=5, b=2, c;
        c = a + b;
        printf("%d + %d = %d\n",a,b,c);

        c = a - b;
        printf("%d - %d = %d\n",a,b,c);

        c = a * b;
        printf("%d * %d = %d\n",a,b,c);

        c = a / b;
        printf("%d / %d = %d\n",a,b,c);
        printf("%d / %d = %.2f\n",a,b,(float)a/b);

        c = a % b;
        printf("%d %% %d = %d\n",a,b,c);

    return 0;
}