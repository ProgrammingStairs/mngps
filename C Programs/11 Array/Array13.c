// program showing the concept of array
// program to search an element -- Binary search
// Its mandatory to have array in ascending order

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

    int first = 0;
    int last = size-1;
    int middle = (first+last)/2;

    while(first<=last){
        if(arr[middle]<search)
            first = middle+1;
        
        else if(arr[middle]==search){
            printf("Element found at index : %d",middle+1);
            break;
        }    

        else 
            last = middle-1;

        middle = (first+last)/2;
    }
    if(first>last)
        printf("\nElement not found");
    return 0;
}