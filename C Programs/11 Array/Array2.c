// program showing the concept of array

#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5};
    printf("\nArray elements are :  \n");
    
    for(int i=0;i<5;i++){
        printf("arr[%d] : %d\n",i,arr[i]);
    }
    
    return 0;
}