// example showing the concept of function

#include<stdio.h>

void display(); // function declaration

int main(){
    printf("Before execution\n");
        display();    // function calling 
    printf("After execution\n");    
    return 0;
}

// function definition
void display(){
    printf("display function called..!!\n");
}