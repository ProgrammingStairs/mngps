// example showing the concept of function 
// with argument no return type

#include<stdio.h>

// function definition
void addition(int a, int b){
        int c = a+b;
        printf("Addition : %d\n",c);
}

int main(){
    int a,b; // declaration
        printf("Enter values of a and b : ");
        scanf("%d%d",&a,&b);
    
    addition(a,b); // function calling
    return 0;
}

