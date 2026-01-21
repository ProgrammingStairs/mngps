// program to find out area of triangle by heron's formula
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    float s,area;
    printf("Enter three sides of triangle : ");
    scanf("%d%d%d",&a,&b,&c);

    s = (a+b+c)/2.0;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\narea : %.2f\n",area);
    return 0;
}