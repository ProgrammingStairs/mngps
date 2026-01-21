// example 

#include<stdio.h>
int main(){
    int a=2,b=2,c=2,d;
    d = a==b==c;
    /*
        2==2
          1 == 2
             0 
    */
    printf("value of d : %d\n",d);
    return 0;
}
