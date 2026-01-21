// Example showing the concept of nested loop 

#include<stdio.h>
int main(){
    for(int i=1;i<=3;i++){
        printf("i : %d\n",i);
        for(int j=1;j<=3;j++){
            printf("\tj : %d\n",j);
        }
    }
    return 0;
}