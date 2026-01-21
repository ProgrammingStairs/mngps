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
    int sum=0;
    printf("\nArray elements are : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum = sum + arr[i][j];
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nsum of all elements : %d\n",sum);
    return 0;
}