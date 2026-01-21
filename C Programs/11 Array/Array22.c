// program showing the concept of array
// program showing the concept of multi dimensional array

#include<stdio.h>
int main(){
    int r,c,num,arr[20][30][30];
    printf("Enter no. of matrix , rows and columns : ");
    scanf("%d%d%d",&num,&r,&c);

    printf("\nEnter array elements : \n");
    for(int i=0;i<num;i++){
        printf("\nEnter %d matrix elements \n",i+1);
        for(int j=0;j<r;j++){
            for(int k=0;k<c;k++)
                scanf("%d",&arr[i][j][k]);
        }
    }
        printf("\nResultant Array elements : \n");
        for(int i=0;i<num;i++){
            printf("\n%d matrix elements are : \n",i+1);
            for(int j=0;j<r;j++){
                for(int k=0;k<c;k++)
                    printf("%d\t",arr[i][j][k]);
                printf("\n");
            }
            printf("\n");
        }
return 0;
}