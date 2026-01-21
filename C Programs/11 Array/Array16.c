// program showing the concept of array
// program to find out sum of corners elements

#include<stdio.h>
int main(){
    int r,c,arr[3][3];
    printf("Enter rows and columns : ");
    scanf("%d%d",&r,&c);

    printf("Enter Array elements : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nArray elements are : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nsum of corner elements : %d\n",arr[0][0]+arr[0][c-1]+arr[r-1][0]+arr[r-1][c-1]);
    return 0;
}