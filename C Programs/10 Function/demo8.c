// example showing the concept of function 
// with argument with return type

#include<stdio.h>

// function definition
int addition(int a, int b){
    return a+b;
}

int main(){
    int a,b; // declaration
        printf("Enter values of a and b : ");
        scanf("%d%d",&a,&b);
    
    // int c = addition(a,b); // function calling
    // printf("Addition : %d\n",c);

    printf("Addition : %d\n",addition(a,b));

    return 0;
}

