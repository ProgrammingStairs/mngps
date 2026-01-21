/*
    1
    12
    1 3
    1  4
    12345
*/
#include<stdio.h>
int main(){
    int i,j,rows;
    printf("Enter rows : ");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            if(j==1 || i==j || i==rows )
                printf("%d",j);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}