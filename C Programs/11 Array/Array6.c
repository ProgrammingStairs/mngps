// program showing the concept of array
// sum of all the elements of an array

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

    int sum=0;
    printf("\nArray elements are :  \n");
    for(int i=0;i<size;i++){
        sum = sum + arr[i];
        printf("%d\t",arr[i]);
    }
    printf("\nsum : %d\n",sum);

    return 0;
}