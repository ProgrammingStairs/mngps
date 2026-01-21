// program to find out area of circle

#include<stdio.h>
int main(){
    const float PI = 3.14;
    float r,area;
    printf("Enter radius : ");
    scanf("%f",&r);
    area = PI * r * r;
    printf("area : %.2f\n",area);
    return 0;
}