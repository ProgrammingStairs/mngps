// example showing the concept of function

#include<stdio.h>
// function definition
void display(){
    printf("display function called..!!\n");
}
void show(){
    printf("show function called..!!\n");
}
void draw(){
    printf("draw function called..!!\n");
}
int main(){
    printf("Before execution\n");
        display();    // function calling 
        show(); // function calling
        draw(); // function calling
    printf("After execution\n");    
    return 0;
}

