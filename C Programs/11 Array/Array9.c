// program showing the concept of array
// array is pallindrome or not

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
    printf("\nArray elements :  \n");
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    int i;
    for(i=0;i<size/2;i++){
        if(arr[i] != arr[size-1-i])
            break;
    }
    
    if(i==size/2)
        printf("\nArray is palindrome");
    else 
        printf("\nArray is not palindrome");

    return 0;
}