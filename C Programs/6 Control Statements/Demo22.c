// example showing the concept of switch control statement
#include<stdio.h>
int main(){
    int l,b;
    float r;
    char code;
    printf("Select From Options : \n");
    printf("R/r for Area of Rectangle\n");
    printf("C/c for Area of Circle\n");
    printf("E/e for Exit\n");
    
    printf("Enter Code : ");
    scanf("%c",&code);

    switch(code){
        case 'r':
        case 'R': 
                printf("Enter values of l and b : ");
                scanf("%d%d",&l,&b);
                printf("Area of Rectangle : %d\n",l*b);
                break;
        case 'c':
        case 'C': 
                printf("Enter radius : ");
                scanf("%f",&r);
                printf("Area of Circle : %.2f\n",3.14*r*r);
                break;
        case 'e' : 
        case 'E' :
                printf("Visit Again\n");
                break;
        default : 
            printf("Invalid\n");
            break;
    }
    return 0;
}