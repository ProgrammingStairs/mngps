// example showing the concept of recursion

#include<stdio.h>
int power(int b,int e){
    if(e==0)
        return 1;
    else
        return b * power(b,e-1); 
}
int main(){
    int b,e;
    printf("Enter base and exponent : ");
    scanf("%d%d",&b,&e);
    int res = power(b,e);
    printf("value : %d\n",res);
    return 0;
}

