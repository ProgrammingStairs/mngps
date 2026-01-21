// program showing the concept of bitwise operators

#include<stdio.h>
int main(){
    int a=9, b=10, c;
        c = a & b;
        printf("%d & %d = %d\n",a,b,c);

        c = a | b;
        printf("%d | %d = %d\n",a,b,c);

        c = a ^ b;
        printf("%d ^ %d = %d\n",a,b,c);

        c = 4 << 2;
        printf("4 << 2 = %d\n",c);
       
        c = 4 >> 2;
        printf("4 >> 2 = %d\n",c);

        c = ~a;
        printf("~%d = %d\n",a,c);

    return 0;
}