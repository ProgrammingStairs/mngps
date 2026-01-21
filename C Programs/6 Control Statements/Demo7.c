// example showing the concept of if else statement 

#include<stdio.h>
int main(){
    int sal,exp;
    printf("Enter salary and exp : ");
    scanf("%d%d",&sal,&exp);

    if(sal>=20000 && exp>=5)
        printf("Gets Hike\n");
    else
        printf("Not eligible to get hike\n");

    return 0;
}