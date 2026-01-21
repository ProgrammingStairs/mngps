// program showing the concept of array
// program to add two 2d array

#include<stdio.h>
int main(){
    int r,c,arr1[3][3],arr2[3][3],arr3[3][3];
    printf("Enter rows and columns : ");
    scanf("%d%d",&r,&c);

    printf("Enter first Array elements : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter second Array elements : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
        printf("\nFirst Array elements are : \n");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                printf("%d\t",arr1[i][j]);
            }
            printf("\n");
        }
        printf("\nSecond Array elements are : \n");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                printf("%d\t",arr2[i][j]);
            }
            printf("\n");
        }

        printf("\nResultant Array elements after addition : \n");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                    arr3[i][j] = arr1[i][j] + arr2[i][j];
                printf("%d\t",arr3[i][j]);
            }
            printf("\n");
        }
    return 0;
}