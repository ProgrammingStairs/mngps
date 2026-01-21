/*
        *
       **
      ***
     ****
    *****
*/
#include<stdio.h>
int main(){
    int i,j,rows;
    printf("Enter rows : ");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++){
        for(int sp=1;sp<=rows-i;sp++)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}