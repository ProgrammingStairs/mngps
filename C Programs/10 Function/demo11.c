// example showing the concept of recursion

#include<stdio.h>
int fact(int n){
    if(n==0)
        return 1;
    else
        return n * fact(n-1); 
}
int main(){
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    int res = fact(num);
    printf("Factorial : %d\n",res);
    return 0;
}

