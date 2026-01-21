// example 

#include<stdio.h>
int main(){
    int num1 = 100;
    float num2 = 23.34;
    double num3 = 23.34;
    long num4 = 23;
    char ch = 'a';
    printf("num1 : %d\n",num1);
    printf("num2 : %f\n",num2);
    printf("num2 : %.0f\n",num2);
    printf("num2 : %.1f\n",num2);
    printf("num2 : %.3f\n",num2);
    printf("num2 : %.10f\n",num2);
    printf("character : %c\n",ch);
    printf("num3 : %lf\n",num3);
    printf("num4 : %ld\n",num4);
  
    return 0;
}
