// program showing the concept of array
// reverse array elements

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

    int temp;
    for(int i=0;i<size/2;i++){
        temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }

    printf("\nArray elements after reversing :  \n");
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}