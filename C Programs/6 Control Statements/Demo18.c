// example showing the concept of switch control statement
// error in output
#include<stdio.h>
int main(){
    char ch='a';
    switch(ch){
        case 'a': 
            printf("statement 1\n");
            break;
        case 97 : 
            printf("statement 2\n");
            break;
        default : 
            printf("Invalid\n");
            break;
    }
    return 0;
}