// program showing the concept of array

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
    
    return 0;
}