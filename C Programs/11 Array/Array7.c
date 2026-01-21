// program showing the concept of array
// min and max element from an array

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

    int min=arr[0],max=arr[0];
    printf("\nArray elements are :  \n");
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
        
        if(min>arr[i])
            min = arr[i];

        if(max<arr[i])
            max = arr[i];
    }
    printf("\nMinimum element : %d\n",min);
    printf("\nMaximum element : %d\n",max);

    return 0;
}