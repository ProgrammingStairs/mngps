// program showing the concept of array
// sum of first and last element of an array

#include<stdio.h>
int main(){
    int size;
    printf("Enter size of array : ");
    scanf("%d",&size);

    int arr[size];
    printf("\nEnter Array elements :  \n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("\nArray elements are :  \n");
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    
    printf("Sum : %d\n",arr[0]+arr[size-1]);
    return 0;
}