// example showing the concept of function 
// no argument no return type

#include<stdio.h>

// function definition
void addition(){
    int a,b,c; // declaration
        printf("Enter values of a and b : ");
        scanf("%d%d",&a,&b);

        c = a+b;
        printf("Addition : %d\n",c);
}

int main(){
    addition(); // function calling
    return 0;
}

