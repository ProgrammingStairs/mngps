/*
    Example to check whether entered number is armstrong or not
*/

#include<stdio.h>
#include<math.h>
int main(){
    int num,rem,count=0,temp,sum=0,temp1; 
    
    printf("Enter number : ");
    scanf("%d",&num);
    temp = num;
    temp1 = num;

    while(num > 0){ 
        count++;
        num = num/10;
    }

    while(temp>0){
        rem = temp % 10;
        sum = sum + pow(rem,count);
        temp = temp / 10;
    }

    if(temp1==sum)
        printf("Number is armstrong");
    else
        printf("Number is not armstrong");
    return 0;
}