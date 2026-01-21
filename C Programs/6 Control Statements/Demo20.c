// example showing the concept of switch control statement
#include<stdio.h>
int main(){
    int a,b,code;
    printf("Enter values of a and b : ");
    scanf("%d%d",&a,&b);

    printf("Select From Options : \n");
    printf("1 for Add\n");
    printf("2 for Sub\n");
    printf("3 for Mul\n");
    printf("4 for Div\n");
    printf("5 for Mod\n");
    printf("6 for Exit\n");
    
    printf("Enter Code : ");
    scanf("%d",&code);

    switch(code){
        case 1: 
            printf("Add : %d\n",a+b);
            break;
        case 2: 
            printf("Sub : %d\n",a-b);
            break;
        case 3: 
            printf("Mul : %d\n",a*b);
            break;
        case 4: 
            printf("Div : %.2f\n",(float)a/b);
            break;
        case 5: 
            printf("Mod : %d\n",a%b);
            break;
        case 6: 
            printf("Please Visit again\n");
            break;
        default : 
            printf("Invalid\n");
            break;
    }
    return 0;
}