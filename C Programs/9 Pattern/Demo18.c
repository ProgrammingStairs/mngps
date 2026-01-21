/*
        1
       1 2
      1   3
     1     4
    1 2 3 4 5
*/
#include<stdio.h>
int main(){
    int i,j,rows;
    printf("Enter rows : ");
    scanf("%d",&rows);

//    for(i=1;i<=rows;i++){
    for(i=rows;i>=1;i--){
        for(int sp=1;sp<=rows-i;sp++)
            printf(" ");
        for(j=1;j<=i;j++){
            if(j==1 || i==j || i==rows)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}