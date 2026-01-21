/*
    1    2    4    7     11     16      .........
*/

#include<stdio.h>
int main(){
    int i,num,sum = 1;
    printf("Enter number : ");
    scanf("%d",&num);

    for(i=0;i<num;i++){
        sum = sum + i;
        printf("%d\t",sum);
    }
      
    return 0;
}