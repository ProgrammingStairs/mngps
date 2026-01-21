// example 

#include<stdio.h>
int main(){
    int a=2,b=2,d;
    d = a==b==1;
    /*
        2==2
          1 == 1
             1 
    */
    printf("value of d : %d\n",d);
    return 0;
}
