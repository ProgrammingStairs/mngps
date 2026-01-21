// Example showing the concept of jump statement -- break statement

#include<stdio.h>
int main(){
    for(int i=1;i<=3;i++){
        printf("i : %d\n",i);
        for(int j=1;j<=3;j++){
            if(i==2 && j==2)
                break;
            printf("\tj : %d\n",j);
        }
    }
    return 0;
}