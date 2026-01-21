// example showing the concept of switch control statement
#include<stdio.h>
int main(){
    int a,b;
    char code;
    printf("Enter values of a and b : ");
    scanf("%d%d",&a,&b);
    getchar();
    printf("Select From Options : \n");
    printf("+ for Add\n");
    printf("- for Sub\n");
    printf("* for Mul\n");
    printf("/ for Div\n");
    printf("%% for Mod\n");
    printf("e for Exit\n");
    
    printf("Enter Code : ");
    scanf("%c",&code);

    switch(code){
        case '+': 
            printf("Add : %d\n",a+b);
            break;
        case '-': 
            printf("Sub : %d\n",a-b);
            break;
        case '*': 
            printf("Mul : %d\n",a*b);
            break;
        case '/': 
            printf("Div : %.2f\n",(float)a/b);
            break;
        case '%': 
            printf("Mod : %d\n",a%b);
            break;
        case 'e': 
            printf("Please Visit again\n");
            break;
        default : 
            printf("Invalid\n");
            break;
    }
    return 0;
}