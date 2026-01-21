/* 
    call by value vs call by reference

    call by value : 
    a. In call by value, calling is done by passing values
    b. In call by value, copy of original data is going to be pass 
    c. In call by value, changes made on copied data does not reflect on original data 
*/
#include<stdio.h>
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("After Swapping in swap : \na : %d\nb : %d\n",a,b);
}
int main(){
    int a,b;
    printf("Enter values of a and b : ");
    scanf("%d%d",&a,&b);

    printf("Before Swapping : \na : %d\nb : %d\n",a,b);
        swap(a,b);        
    printf("After Swapping in main : \na : %d\nb : %d\n",a,b);
    
    return 0;
}