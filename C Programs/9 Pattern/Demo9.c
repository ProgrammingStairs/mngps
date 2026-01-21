/*
    5
    54
    543
    5432
    54321
*/
#include<stdio.h>
int main(){
    int i,j,rows;
    printf("Enter rows : ");
    scanf("%d",&rows);

    for(i=rows;i>=1;i--){
        for(j=rows;j>=i;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}