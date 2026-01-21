/*
        *
       ***
      *****
     *******
    *********
     *******
      *****
       ***
        *
*/
#include<stdio.h>
int main(){
    int i,j,rows;
    printf("Enter rows : ");
    scanf("%d",&rows);

    for(i=1;i<=rows/2+1;i++){
        for(int sp=1;sp<=rows/2+1-i;sp++)
            printf(" ");
        for(j=1;j<=2*i-1;j++)
            printf("*");
        printf("\n");
    }
    for(i=rows/2;i>=1;i--){
        for(int sp=1;sp<=rows/2+1-i;sp++)
            printf(" ");
        for(j=1;j<=2*i-1;j++)
            printf("*");
        printf("\n");
    }

    return 0;
}