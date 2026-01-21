// program showing the concept of array
// example to insert an element at specific index

#include<stdio.h>
int main(){
    int size,index,element;
    printf("Enter size of array : ");
    scanf("%d",&size);

    int arr[size+1];
    printf("\nEnter Array elements :  \n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nArray elements :  \n");
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
   
    printf("Enter index : ");
    scanf("%d",&index);

    printf("Enter Element : ");
    scanf("%d",&element);

    for(int i=size-1;i>=index;i--){
      arr[i+1] = arr[i];
    }
    arr[index] = element;

    printf("\nArray elements after insertion :  \n");
    for(int i=0;i<=size;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}