// program showing the concept of array
// selection sort (Ascending order)

#include<stdio.h>
int main(){
    int size,index,element;
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
    int temp;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                temp  = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nArray elements in ascending order :  \n");
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}