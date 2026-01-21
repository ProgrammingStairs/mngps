// Example showing the concept of jump statement -- exit

#include<stdio.h>
#include<stdlib.h>
int main(){
    for(int i=1;i<=3;i++){
        printf("i : %d\n",i);
        for(int j=1;j<=3;j++){
            if(i==2 && j==2)
                exit(0);
            printf("\tj : %d\n",j);
        }
    }
    printf("End of program");
    return 0;
}