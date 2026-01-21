// program showing the concept of logical operator

#include<stdio.h>
int main(){
    int a = 5, b = 30;
    
    (a>10 && b<50) ? printf("statement 1\n") : printf("statement 2\n");
    (a>10 || b<50) ? printf("statement 1\n") : printf("statement 2\n");
    printf("!0 : %d\n",!0);
    printf("!1 : %d\n",!1);
    printf("!456 : %d\n",!456);
    printf("!a : %d\n",!'a');
    printf("!hello : %d\n",!"hello");
    printf("!!0 : %d\n",!!0);
    
    return 0;
}