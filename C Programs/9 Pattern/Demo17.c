/*
       2   4   6   8   10.... 2*i
    1   3   5   7   9   11.... 2*i-1  
*/
/*
        *
       ***
      *****
     *******
    *********
*/
#include<stdio.h>
int main(){
    int i,j,rows;
    printf("Enter rows : ");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++){
        for(int sp=1;sp<=rows-i;sp++)
            printf(" ");
        for(j=1;j<=2*i-1;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}