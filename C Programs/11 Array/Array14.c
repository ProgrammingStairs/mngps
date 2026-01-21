// program showing the concept of array
// program showing the concept of 2d array

#include<stdio.h>
int main(){
    int arr[3][3] = {
        {1,2,3},
        {5,6,7},
        {7,8,9}
    };

    printf("Array elements are : \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}