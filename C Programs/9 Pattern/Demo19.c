/*
        1
       1 3
      1   5
     1     7
    123456789
*/
#include<stdio.h>
int main(){
    int i,j,rows;
    printf("Enter rows : ");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++){
        for(int sp=1;sp<=rows-i;sp++)
            printf(" ");
        for(j=1;j<=2*i-1;j++){
            if(j==1 || j==2*i-1 || i==rows)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}