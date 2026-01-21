// example showing the concept of function 
// no argument with return type

#include<stdio.h>

// function definition
int addition(){
    int a,b; // declaration
        printf("Enter values of a and b : ");
        scanf("%d%d",&a,&b);
        return a+b;
}

int main(){
    int c = addition(); // function calling
    printf("Addition : %d\n",c);
    return 0;
}

