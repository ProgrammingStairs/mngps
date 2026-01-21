// program showing the concept of array
// program to search an element -- linear search

#include<stdio.h>
int main(){
    int size,search;
    printf("Enter size of array : ");
    scanf("%d",&size);

    int arr[size];
    printf("\nEnter Array elements :  \n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nArray elements :  \n");
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }

    printf("Enter element to be search : ");
    scanf("%d",&search);

    int flag=0;
    for(int i=0;i<size;i++){
        if(arr[i] == search){
            printf("Element found at index : %d\n",i+1);
            flag=1;
        }
    }
    if(!flag)
        printf("Element not found");

    return 0;
}