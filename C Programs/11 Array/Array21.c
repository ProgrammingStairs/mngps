// program showing the concept of array
// program to multiply two 2d array

#include<stdio.h>
int main(){
    int r1,c1,r2,c2,arr1[3][3],arr2[3][3],arr3[3][3];
    printf("Enter rows and columns of first matrix: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d%d",&r2,&c2);

    printf("Enter first Array elements : \n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter second Array elements : \n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&arr2[i][j]);
        }
    }

    printf("\nFirst Array elements are : \n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
        printf("\nSecond Array elements are : \n");
        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
                printf("%d\t",arr2[i][j]);
            }
            printf("\n");
        }

        if(c1==r2){
            for(int i=0;i<r1;i++){
                for(int j=0;j<c2;j++){
                    arr3[i][j] = 0;
                    for(int k=0;k<c1;k++){
                        arr3[i][j] = arr3[i][j] + arr1[i][k] * arr2[k][j];
                    }
                }
            }
        printf("\nResultant Array elements after multiplication : \n");
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                printf("%d\t",arr3[i][j]);
            }
            printf("\n");
        }

        }else{
            printf("Multiplication not possible\n");
        }
    return 0;
}